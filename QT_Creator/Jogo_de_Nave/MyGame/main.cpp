// Trabalho de Alisson Pereira Ferreira
// Matricula 22250769
#include <QApplication>

#include "game.h"

Game *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Criar novo jogo
    game = new Game();
    game->show();

    return a.exec();
}
