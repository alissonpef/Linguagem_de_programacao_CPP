#ifndef VARIAVEIS_GLOBAL_H
#define VARIAVEIS_GLOBAL_H

#include <QtSql>
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QTableWidget>

class Variaveis_globais
{
public:
    static bool logado; // Informa se o programa está bloqueado ou não
    static QString nome_colab, acesso_colab, username_colab; // Nome do colaborador e aonde ele pode acessar (NOME DO BANCO DE DADOS)
    static int id_colab; // ID do colaborador

};

#endif // VARIAVEIS_GLOBAL_H
