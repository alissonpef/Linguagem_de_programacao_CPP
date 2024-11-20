#include "fm_gestaocolaboradores.h"
#include "ui_fm_gestaocolaboradores.h"

fm_gestaoColaboradores::fm_gestaoColaboradores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_gestaoColaboradores)
{
    ui->setupUi(this);
    if(!con.aberto())
    {
        if(!con.abrir())
        {
            QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
        }
    }

    ui->cb_novoacesso->addItem("A");
    ui->cb_novoacesso->addItem("B");
    ui->cb_gu_acesso->addItem("A");
    ui->cb_gu_acesso->addItem("B");

    ui->txt_novonome->setFocus();
    ui->tabWidget->setCurrentIndex(0);
    //formatação da tabela
    ui->tw_gu_listausuario->setColumnCount(2);
    ui->tw_gu_listausuario->setColumnWidth(0,50);
    ui->tw_gu_listausuario->setColumnWidth(1,328);
    QStringList cabecalhos={"ID","Nome usuario"};
    ui->tw_gu_listausuario->setHorizontalHeaderLabels(cabecalhos);
    ui->tw_gu_listausuario->setStyleSheet("QTableView {selection-backgroud-color:green}");
    ui->tw_gu_listausuario->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tw_gu_listausuario->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_gu_listausuario->verticalHeader()->setVisible(false);
}

fm_gestaoColaboradores::~fm_gestaoColaboradores()
{
    delete ui;
}

void fm_gestaoColaboradores::on_btn_novo_novousuario_clicked()
{
    ui->txt_novonome->clear();
    ui->txt_novasenha->clear();
    ui->txt_novousuario->clear();
    ui->txt_novotelefone->clear();
    ui->cb_novoacesso->setCurrentIndex(0);
    ui->txt_novonome->setFocus();
}

void fm_gestaoColaboradores::on_btn_novousuario_gravar_clicked()
{
    if(!con.abrir())
    {
        QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
    }

    //pega o que foi escrito no .ui
    QString nome     = ui ->txt_novonome->text();
    QString username = ui ->txt_novousuario->text();
    QString senha    = ui ->txt_novasenha ->text();
    QString telefone = ui ->txt_novotelefone ->text();
    QString acesso   = ui ->cb_novoacesso->currentText();



    //cria query
    QSqlQuery query;
    query.prepare("insert into tb_colaboradores (nome_colab,username_colab,senha_colab,fone_colab,acesso_colab)"
                  " values('"+nome+"','"+username+"','"+senha+"','"+telefone+"','"+acesso+"')");

    if(!query.exec())
    {
        QMessageBox::critical(this,"ERROR","Erro ao inserir o novo usuario");
    }
    else
    {
        ui->txt_gu_nome->   clear();
        ui->txt_gu_username->   clear();
        ui->txt_gu_senha->   clear();
        ui->txt_gu_telefone->   clear();
        ui->cb_gu_acesso->   setCurrentIndex(0);
        ui->txt_novonome->setFocus();
        QMessageBox::information(this,"SALVO","Novo usuario cadastrado");
    }

}

void fm_gestaoColaboradores::on_pushButton_2_clicked()
{
    close();
}

void fm_gestaoColaboradores::on_tabWidget_currentChanged(int index)
{
    if(index==1)
    {
        if(!con.abrir())
        {
            QMessageBox::critical(this,"ERROR","Erro ao abir banco de dados");
        }

        funcoes_globais::removerLinhas(ui->tw_gu_listausuario);
        int cont_linhas =0;
        QSqlQuery query;
        query.prepare("select id_usuario, nome_usuario from tb_colaboradores order by id_colab");
        query.exec();

        if(query.exec())
        {
            while(query.next())
            {
                ui->tw_gu_listausuario->insertRow(cont_linhas);
                ui->tw_gu_listausuario->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
                ui->tw_gu_listausuario->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
                ui->tw_gu_listausuario->setRowHeight(cont_linhas,20);
                cont_linhas++;
            }

        }
        else
        {
            QMessageBox::critical(this,"ERRO","Erro ao listar os usuarios");
        }
    }

}

void fm_gestaoColaboradores::on_tw_gu_listausuario_itemSelectionChanged()
{
    int id=ui->tw_gu_listausuario->item(ui->tw_gu_listausuario->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_colaboradores where id_colab="+QString::number(id));
    if(query.exec())
    {
        query.first();
        ui->txt_gu_nome->setText(query.value(1).toString());
        ui->txt_gu_username->setText(query.value(2).toString());
        ui->txt_gu_senha->setText(query.value(3).toString());
        ui->txt_gu_telefone->setText(query.value(4).toString());
        ui->cb_gu_acesso->setCurrentText(query.value(5).toString());
    }
}

void fm_gestaoColaboradores::on_btn_gu_excluir_clicked()
{
    if(ui->txt_gu_nome->text()=="")
    {
        QMessageBox::critical(this,"ERRO","Selecione um produto");
    }
    else
    {
        QMessageBox::StandardButton opc = QMessageBox::question(this,"Excluir","Tem certeza que deseja excluir o usuario?",QMessageBox::Yes|QMessageBox::No);
        if(opc == QMessageBox::Yes)
        {
            int linha=ui->tw_gu_listausuario->currentRow();
            int id=ui->tw_gu_listausuario->item(linha,0)->text().toInt();
            QSqlQuery query;
            query.prepare("delete from tb_colaboradores where id_colab="+QString::number(id));
            if(query.exec())
            {
                ui->tw_gu_listausuario->removeRow(linha);
                QMessageBox::information(this,"Deletado","Usuario foi deletado");
            }
            else
            {
                QMessageBox::critical(this,"EROR","Erro ao deletar o usuario");
            }
        }

    }
}


void fm_gestaoColaboradores::on_btn_gu_filtrar_clicked()
{
    QString busca;
    funcoes_globais::removerLinhas(ui->tw_gu_listausuario);

    if(ui->txt_gu_filtrar->text()=="")
    {
        if(ui->rb_gu_id->isChecked())
        {
            busca="select id_colab,nome_colab from tb_colaboradores order by id_colab";
        }
        else
        {
            busca="select id_colab,nome_colab from tb_colaboradores order by nome_colab";
        }
    }
    else
    {
        if(ui->rb_gu_id->isChecked())
        {
            busca="select id_colab,nome_colab from tb_colaboradores where id_colab="+ui->txt_gu_filtrar->text()+" order by id_colab";
        }
        else
        {
            busca="select id_usuario,nome_colab from tb_colaboradores where nome_colab like '%"+ui->txt_gu_filtrar->text()+"%' order by nome_colab";
        }
    }

    int cont_linhas=0;
    QSqlQuery query;
    query.prepare(busca);
    if(query.exec())
    {
        while(query.next())
        {
            ui->tw_gu_listausuario->insertRow(cont_linhas);
            ui->tw_gu_listausuario->setItem(cont_linhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_gu_listausuario->setItem(cont_linhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_gu_listausuario->setRowHeight(cont_linhas,20);
            cont_linhas++;
        }
    }
    else
    {
        QMessageBox::critical(this,"ERRO","Erro ao filtar produto \n Verifique o preenchimento dos campos");
    }

    ui->txt_gu_filtrar->clear();
    ui->txt_gu_filtrar->setFocus();
}
