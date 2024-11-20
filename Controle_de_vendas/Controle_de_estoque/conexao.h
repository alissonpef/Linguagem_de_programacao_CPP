#ifndef CONEXAO_H
#define CONEXAO_H

#include <QtSql>

class Conexao
{
public:
    QSqlDatabase bancoDeDados;
    //  QString local;
    QString banco;
    Conexao()
    {
        // Declaração do local do banco de dados
        banco = "/Users/Alisson Pereira/Documents/QT_Creator/Trabalho_Final/build-Controle_de_estoque-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/debug/db/Controle_de_estoque.db";
        bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    }
    void fechar()
    {
        bancoDeDados.close();
    }

    bool abrir()
    {
        bancoDeDados.setDatabaseName(banco);

        if (!bancoDeDados.open())
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    bool aberto() // Verifica se o banco está aberto
    {
        if (!bancoDeDados.isOpen())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
#endif // CONEXAO_H
