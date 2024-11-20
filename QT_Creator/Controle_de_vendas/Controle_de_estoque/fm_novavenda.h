#ifndef FM_NOVAVENDA_H
#define FM_NOVAVENDA_H

#include <QDialog>
#include "conexao.h"
#include <QTableWidget>

namespace Ui {
class fm_novavenda;
}

class fm_novavenda : public QDialog
{
    Q_OBJECT

public:
    explicit fm_novavenda(QWidget *parent = nullptr);
    ~fm_novavenda();
    Conexao con;
    int contlinhas;
    void resetarCampos();
    double calculaTotal(QTableWidget *tw ,int coluna);
    void removerLinhas(QTableWidget *tw);
    static QString g_idprod, g_prod, g_qtde, g_valuni, g_valtotal;
    static bool alterou;

private slots:
    void on_txt_codproduto_returnPressed();

    void on_btn_excluirproduto_clicked();

    void on_btn_editarproduto_clicked();

    void on_btn_finalizarvenda_clicked();

private:
    Ui::fm_novavenda *ui;
};

#endif // FM_NOVAVENDA_H
