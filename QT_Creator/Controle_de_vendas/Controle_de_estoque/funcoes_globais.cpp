#include "funcoes_globais.h"

funcoes_globais::funcoes_globais()
{

}

void funcoes_globais::removerLinhas(QTableWidget *tw) // Remove linhas
{
    while(tw->rowCount()>0) // Remove a linha se for maior que zero
    {
        tw->removeRow(0);
    }
}
