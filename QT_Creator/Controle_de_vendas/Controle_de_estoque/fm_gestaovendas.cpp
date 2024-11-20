#include "fm_gestaovendas.h"
#include "ui_fm_gestaovendas.h"
#include <QDebug>

fm_gestaoVendas::fm_gestaoVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoVendas)
{
    ui->setupUi(this);

    //formatar tabela das vendas
    ui->tw_gv_listaVendas->horizontalHeader()->setVisible(true);
    ui->tw_gv_listaVendas->setColumnCount(6);
    QStringList cabe2={"ID","Data","Hora","Valor Total","Usuario","Tipo PG"};
    ui->tw_gv_listaVendas->setHorizontalHeaderLabels(cabe2);
    ui->tw_gv_listaVendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_gv_listaVendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_gv_listaVendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_gv_listaVendas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    con.abrir();
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas");
    query.exec();
    query.first();
    do{
        //inserir no Table Widget os valores do banco de dados
        ui->tw_gv_listaVendas->insertRow(cont_linhas);
        ui->tw_gv_listaVendas->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,5,new QTableWidgetItem(query.value(5).toString()));

        cont_linhas++;

    }while (query.next());

    con.fechar();
}

fm_gestaoVendas::~fm_gestaoVendas()
{
    delete ui;
}

// Lista de produtos
void fm_gestaoVendas::on_tw_gv_listaVendas_itemSelectionChanged()
{
    ui->tw_gv_listaprodutos->setRowCount(0);
    con.abrir();
    int cont_linhas = 0;
    QSqlQuery query;
    query.prepare("select id_movimentacao,produto,qtde,valor_un,valor_total from tb_produtos_vendas where id_vendas="+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),0)->text());
    if(!query.exec())
    {
        qDebug()<< "ERRO:"<< query.lastError().text();
    }
    else
    {
        while (query.next())
        {
            ui->tw_gv_listaprodutos->insertRow(cont_linhas);
            ui->tw_gv_listaprodutos->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gv_listaprodutos->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gv_listaprodutos->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_gv_listaprodutos->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_gv_listaprodutos->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));

            cont_linhas++;
        }
    }

    con.fechar();
}


void fm_gestaoVendas::on_btn_gv_filtar_clicked()
{
    funcoes_globais::removerLinhas(ui->tw_gv_listaVendas);
    ui->tw_gv_listaprodutos->setRowCount(0);
    con.abrir();
    int cont_linhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas where data_venda between '"+ui->de_gv_dataini->text()+"' and '"+ui->de_gv_datafim->text()+"'");
    query.exec();
    query.first();
    do{
        ui->tw_gv_listaVendas->insertRow(cont_linhas);
        ui->tw_gv_listaVendas->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_gv_listaVendas->setItem(cont_linhas,5,new QTableWidgetItem(query.value(5).toString()));
        cont_linhas++;

    }while (query.next());
    con.fechar();
}

void fm_gestaoVendas::on_btn_gv_relatorio_clicked()
{
    QString nome=QDir::currentPath()+"/"+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),0)->text()+"_vendas.pdf";
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(nome);

    QPainter painter;
    if(!painter.begin(&printer))
    {
        qDebug()<<"Erro ao abrir PDF";
        return;
    }
        int linhas=350;
        int salto=20;

        painter.drawPixmap(25,25,QPixmap(":/imagens/logo.png"));
        painter.drawText(25,300,"ID:"+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),0)->text());
        painter.drawText(150,300,"Data:"+ui->tw_gv_listaVendas->item(ui->tw_gv_listaVendas->currentRow(),1)->text());

        for(int i=0;i<ui->tw_gv_listaprodutos->rowCount();i++)
        {
            painter.drawText(25,linhas,ui->tw_gv_listaprodutos->item(i,0)->text());
            painter.drawText(80,linhas,ui->tw_gv_listaprodutos->item(i,1)->text());
            painter.drawText(300,linhas,ui->tw_gv_listaprodutos->item(i,2)->text());
            linhas+=salto;
        }
        printer.newPage();
        painter.end();
}
