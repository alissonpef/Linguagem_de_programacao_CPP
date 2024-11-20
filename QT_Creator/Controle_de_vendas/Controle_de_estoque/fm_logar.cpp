#include "fm_logar.h"
#include "ui_fm_logar.h"
#include <QMessageBox>
#include "MainWindow.h"
#include "variaveis_globais.h"

fm_logar::fm_logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_logar)
{
    ui->setupUi(this);
    logado = false; // Inicia botao como falso
}

fm_logar::~fm_logar()
{
    delete ui;
}

void fm_logar::on_btn_logar_clicked() // Botao logar
{
    if (!con.abrir()) // Caso nao abra corretamente
    {
        QMessageBox::warning(this, "ERRO", "Erro ao abrir o banco de dados");
    }
    else // Caso abra corretamente
    {
        QString username, senha;
        username = ui->txt_username->text();
        senha = ui->txt_senha->text();
        QSqlQuery query;
        query.prepare("select * from tb_colaboradores where username_colab = '" + username + "' and senha_colab = '" + senha + "'");

        if (query.exec()) // Executando a query
        {
            query.first();
            if (query.value(1).toString() != "") // Posição na tabela do banco dea dados (nome)
            {
                Variaveis_globais::logado = true; // Altera direto no MainWindow
                Variaveis_globais::nome_colab = query.value(1).toString(); // Altera direto no MainWindow
                Variaveis_globais::id_colab = query.value(0).toInt(); // Altera direto no MainWindow
                Variaveis_globais::acesso_colab = query.value(5).toString(); // Altera direto no MainWindow
                nome = query.value(1).toString();
                acesso = query.value(5).toString();
                con.fechar();
                close();
            }
            else
            {
                QMessageBox::warning(this, "ERRO", "Usuario não encontrado");
            }
        }
        else
        {
            QMessageBox::warning(this, "ERRO", "Erro ao fazer login");
        }
    }
    con.fechar();
}



void fm_logar::on_btn_cancelar_clicked() // Botao cancelar
{
    logado = false;
    close();
}
