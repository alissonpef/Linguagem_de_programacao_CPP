#ifndef FM_GESTAOCOLABORADORES_H
#define FM_GESTAOCOLABORADORES_H

#include "funcoes_globais.h"
#include "variaveis_globais.h"
#include "conexao.h"

namespace Ui {
class fm_gestaoColaboradores;
}

class fm_gestaoColaboradores : public QDialog
{
    Q_OBJECT

public:
    explicit fm_gestaoColaboradores(QWidget *parent = nullptr);
    ~fm_gestaoColaboradores();
    Conexao con;

private slots:
    void on_btn_novo_novousuario_clicked();

    void on_btn_novousuario_gravar_clicked();

    void on_pushButton_2_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_btn_gu_excluir_clicked();

    void on_tw_gu_listausuario_itemSelectionChanged();

    void on_btn_gu_filtrar_clicked();

private:
    Ui::fm_gestaoColaboradores *ui;
};

#endif // FM_GESTAOCOLABORADORES_H
