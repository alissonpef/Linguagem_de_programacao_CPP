#include "fm_novavenda.h"
#include "ui_fm_novavenda.h"
#include "conexao.h"
#include <QMessageBox>
#include <fm_editarprodutovenda.h>
#include "mainwindow.h"
#include "variaveis_globais.h"

// Variaveis globais
QString fm_novavenda::g_idprod;
QString fm_novavenda::g_prod;
QString fm_novavenda::g_qtde;
QString fm_novavenda::g_valuni;
QString fm_novavenda::g_valtotal;

bool fm_novavenda::alterou;

fm_novavenda::fm_novavenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_novavenda)
{
    ui->setupUi(this);
    con.abrir();
    // Verifica e abre o banco de dados
    if(!con.aberto())
    {
        if(!con.abrir())
        {
            QMessageBox::warning(this,"ERROR","Erro ao abir banco de dados");
        }
    }

    // Arrumar a TableWidget
    ui->tw_listaprodutos->setColumnCount(5);
    ui->tw_listaprodutos->setColumnWidth(0,100);
    ui->tw_listaprodutos->setColumnWidth(1,200);
    ui->tw_listaprodutos->setColumnWidth(2,100);
    ui->tw_listaprodutos->setColumnWidth(3,100);
    ui->tw_listaprodutos->setColumnWidth(4,100);

    QStringList cabecalhos={"Código","Produto","valor Un.","Qtde","Total"}; // Titulos
    ui->tw_listaprodutos->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_listaprodutos->setStyleSheet("QTableView{selection-background-color:red;");
    ui->tw_listaprodutos->setEditTriggers(QAbstractItemView::NoEditTriggers); // Não deixa editar
    ui->tw_listaprodutos->setSelectionBehavior(QAbstractItemView::SelectRows); // Seleciona toda a linha
    ui->tw_listaprodutos->verticalHeader()->setVisible(false);

    ui->txt_codproduto->setFocus(); // Cursor já sai no campo de código
    contlinhas = 0; // Zera a variavel contadora
}

fm_novavenda::~fm_novavenda()
{
    delete ui;
}

void fm_novavenda::on_txt_codproduto_returnPressed() // Quando o botão código do produto for pressionado
{
    QSqlQuery query;
    QString id=ui->txt_codproduto->text();
    double valtot;
    query.prepare("select id_produto, produto, valor_venda from tb_produtos where id_produto="+id);

    if(query.exec()) // Achou o resultado
    {
        query.first();
        if(query.value(0).toString()!="")
        {
            ui->tw_listaprodutos->insertRow(contlinhas);
            ui->tw_listaprodutos->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_listaprodutos->setItem(contlinhas,3,new QTableWidgetItem(ui->txt_qtde->text()));
            valtot=ui->txt_qtde->text().toDouble()*query.value(2).toDouble();
            ui->tw_listaprodutos->setItem(contlinhas,4,new QTableWidgetItem(QString::number(valtot)));
            ui->tw_listaprodutos->setRowHeight(contlinhas,20);
            contlinhas++;
            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4)));
        }
        else // Não achou o resultado
        {
            QMessageBox::warning(this,"ERROR","Produto não encontrado");
        }
        ui->txt_codproduto->clear();
        ui->txt_qtde->setText("1");
    }
    else // Não achou o resultado
    {
        QMessageBox::warning(this,"ERROR","Erro ao inserir novo produto");
    }
}

void fm_novavenda::resetarCampos() // Reseta os campos
{
    ui->txt_codproduto->clear();
    ui->txt_qtde->setText("1");
    ui->txt_codproduto->setFocus();
}

void fm_novavenda::removerLinhas(QTableWidget *tw) // Reseta as linhas
{
    while(tw->rowCount()>0)
    {
        tw->removeRow(0);
    }
}

double fm_novavenda::calculaTotal(QTableWidget *tw, int coluna)
{
    int totalLinhas;
    double total=0;
    totalLinhas = tw->rowCount(); // Retorna o total de linhas
    for(int i=0;i<totalLinhas;i++)
    {
        total+=tw->item(i,coluna)->text().toDouble();
    }
    return total;
}

void fm_novavenda::on_btn_excluirproduto_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!=-1) // Verifica se tem algo selecionado
    {
        QMessageBox::StandardButton opc = QMessageBox::question(this,"Excluir","Tem certeza que deseja excluir o produto?",QMessageBox::Yes|QMessageBox::No); // Pede a confirmação sim ou não
        if(opc==QMessageBox::Yes)
        {
            ui->tw_listaprodutos->removeColumn(ui->tw_listaprodutos->currentRow()); // Remove a linha
            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4))); // Recalcula o total
            contlinhas--;
        }
    }
    else
    {
        QMessageBox::warning(this,"ERRO","Selecione um produto.");
    }
}

void fm_novavenda::on_btn_editarproduto_clicked()
{
    if(ui->tw_listaprodutos->currentColumn()!= -1)
    {
        int linha=ui->tw_listaprodutos->currentRow();
        g_idprod=ui->tw_listaprodutos->item(linha, 0)->text();
        g_prod=ui->tw_listaprodutos->item(linha, 1)->text();
        g_valuni=ui->tw_listaprodutos->item(linha, 2)->text();
        g_qtde=ui->tw_listaprodutos->item(linha, 3)->text();

        fm_editarprodutovenda f_editarprodutovenda;
        f_editarprodutovenda.exec();

        if(alterou)
        {
            ui->tw_listaprodutos->item(linha, 2)->setText(g_valuni);
            ui->tw_listaprodutos->item(linha, 3)->setText(g_qtde);
            ui->tw_listaprodutos->item(linha, 4)->setText(g_valtotal);
            ui->lb_totalvenda->setText("R$ "+QString::number(calculaTotal(ui->tw_listaprodutos,4))); // Recalcula o total
        }
    }
}


void fm_novavenda::on_btn_finalizarvenda_clicked()
{
    if(ui->tw_listaprodutos->rowCount()>0)
    {
        int idVenda;
        QString msgFimVenda;
        double total = calculaTotal(ui->tw_listaprodutos,4);
        // Armazenar as datas
        QString data = QDate::currentDate().toString("dd/MM/yyyy");
        QString hora = QTime::currentTime().toString("hh:mm:ss");
        QSqlQuery query;
        query.prepare("insert into tb_vendas (data_venda, hora_venda, id_colaborador, valor_total, id_tipo_pagamento) values ('" + data + "','" + hora + "', "+ QString::number(Variaveis_globais::id_colab) + "," + QString::number(total) + ", 1)");
        if(!query.exec())
        {
            QMessageBox::warning(this, "ERRO","Não foi possível registrar uma nova venda");
        }
        else
        {
            query.prepare("select id_venda from td_vendas order by id_venda desc limit 1");
            query.exec();
            query.first();
            idVenda=query.value(0).toInt();
            msgFimVenda="ID Venda: "+QString::number(idVenda)+"\nValor total: R$"+QString::number(total);

            int totalLinhas=ui->tw_listaprodutos->rowCount(); // Armazena total de linhas
            int linha=0;
            while (linha<totalLinhas)
            {
                QString prod=ui->tw_listaprodutos->item(linha,1)->text();
                QString qtde=ui->tw_listaprodutos->item(linha,3)->text();
                QString valUn=ui->tw_listaprodutos->item(linha,2)->text();
                QString valTot=ui->tw_listaprodutos->item(linha,4)->text();
                query.prepare("insert into tb_produtosVendas(id_venda,produto,qtde,valor_un,valor_total) values("+QString::number(idVenda)+",'"+prod+"',"+qtde+","+valUn+","+valTot+")");
                query.exec();
                linha++;
            }

            QMessageBox::information(this, "Venda concluída",msgFimVenda);
            resetarCampos(); // Reseta os campos após a venda
            removerLinhas(ui->tw_listaprodutos);
            ui->lb_totalvenda->setText("R$ 0.00");
        }
    }

    else
    {
        QMessageBox::warning(this, "ERRO","Não existem produtos nesta venda");
    }
}

