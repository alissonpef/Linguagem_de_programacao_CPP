#ifndef FM_GESTAOVENDAS_H
#define FM_GESTAOVENDAS_H

#include "funcoes_globais.h"
#include "variaveis_globais.h"
#include "conexao.h"
#include <QPrinter>
#include <QPainter>
#include <QDir>


namespace Ui {
class fm_gestaoVendas;
}

class fm_gestaoVendas : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoVendas(QWidget *parent = nullptr);
    ~fm_gestaoVendas();
    Conexao con;

private slots:
    void on_tw_gv_listaprodutos_itemSelectionChanged();

    void on_tw_gv_listaVendas_itemSelectionChanged();

    void on_btn_gv_filtar_clicked();

    void on_btn_gv_relatorio_clicked();

private:
    Ui::fm_gestaoVendas *ui;
};

#endif // FM_GESTAOVENDAS_H
