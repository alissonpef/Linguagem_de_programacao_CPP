#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include "fm_logar.h"
#include "fm_novavenda.h"
#include "fm_novavenda.h"
#include "fm_gestaoColaboradores.h"
#include "fm_gestaoEstoque.h"
#include "fm_gestaoVendas.h"
#include "variaveis_globais.h"

int Variaveis_globais::id_colab; // Variavel global static
QString Variaveis_globais::nome_colab; // Variavel global static
QString Variaveis_globais::acesso_colab; // Variavel global static
QString Variaveis_globais::username_colab; // Variavel global static
bool Variaveis_globais::logado; // Variavel global static


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Variaveis_globais::logado = false; // Inicia o programa desbloqueado
    cadFechado.addFile(":/imagens/Cadeado_fechado_32.png"); // Adiciona imagem ao cadeado fechado
    cadAberto->addFile(":/imagens/Cadeado_aberto_32.png"); // Adiciona imagem ao cadeado fechado

    ui->btn_bloquear->setText(""); // Tira o nome do botão
    ui->btn_bloquear->setIcon(cadFechado); // Adiciona a imagem cadeado fechado ao botão
    ui->statusbar->addWidget(ui->btn_bloquear); // Adiciona o botão bloquear a barra de status
    ui->statusbar->addWidget(ui->lb_nome); // Adiciona o botão do colaborador a barra de status
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_bloquear_clicked()
{
    if(!Variaveis_globais::logado) // Chama a janela se nao estiver logado
    {
        fm_logar f_logar; // Cria a variavel f_logar
        f_logar.exec(); // Faz o chamado do menu logar
        if(Variaveis_globais::logado)
        {
            ui->btn_bloquear->setIcon(*cadAberto); // muda par ao icone do cadeado aberto
            ui->lb_nome->setText(Variaveis_globais::nome_colab); // Passa o nome do colaborador
        }
    }
    else // Se estiver desbloqueado
    {
        Variaveis_globais::logado = false;
        ui->btn_bloquear->setIcon(cadFechado); // Muda o icone do botão
        ui->lb_nome->setText("Sem usuario"); // Passa o nome do colaborador
    }
}

void MainWindow::on_pushButton_clicked() // Botão nova venda
{
    if(Variaveis_globais::logado) // Só deixa abrir o botão nova venda, caso tenha alguém logado
    {
        fm_novavenda f_novavenda;
        f_novavenda.exec(); // Execução da janela
    }
    else
    {
        QMessageBox::information(this,"LOGIN", "Não existe Usuario logado");
    }
}


void MainWindow::on_actionEstoque_triggered() // Botão estoque
{
    if(Variaveis_globais::logado) // Só deixa abrir o botão nova venda, caso tenha alguém logado
    {
        if(Variaveis_globais::acesso_colab == "A") // Verifica se tem permissão para alterar o estoque
        {
            fm_gestaoEstoque f_gestaoEstoque;
            f_gestaoEstoque.exec();
        }
        else
        {
            QMessageBox::information(this,"ACESSO", "Acesso não permitido");
        }
    }
    else
    {
        QMessageBox::information(this,"LOGIN", "Não existe Usuario logado");
    }
}


void MainWindow::on_actionColaboradores_triggered() // Botão colaboradores
{
    if(Variaveis_globais::logado) // Só deixa abrir o botão nova venda, caso tenha alguém logado
    {
        if(Variaveis_globais::acesso_colab == "A") // Verifica se tem permissão para alterar os colaboradores
        {
            fm_gestaoColaboradores f_gestaoColaboradores;
            f_gestaoColaboradores.exec();
        }
        else
        {
            QMessageBox::information(this,"ACESSO", "Acesso não permitido");
        }
    }
    else
    {
        QMessageBox::information(this,"LOGIN", "Não existe Usuario logado");
    }
}


void MainWindow::on_actionVendas_triggered() // Botão gestão de vendas
{
    if(Variaveis_globais::logado) // Só deixa abrir o botão nova venda, caso tenha alguém logado
    {
        if(Variaveis_globais::acesso_colab == "A") // Verifica se tem permissão para alterar a gestão de vendas
        {
            fm_gestaoVendas f_gestaoVendas;
            f_gestaoVendas.exec();
        }
        else
        {
            QMessageBox::information(this,"ACESSO", "Acesso não permitido");
        }
    }
    else
    {
        QMessageBox::information(this,"LOGIN", "Não existe Usuario logado");
    }
}

