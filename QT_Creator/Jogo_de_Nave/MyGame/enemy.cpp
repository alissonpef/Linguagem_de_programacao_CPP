#include <QTimer>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QDebug>

#include "enemy.h"
#include "game.h"

extern Game *game;

Enemy::Enemy()
{
    // Posição aleatória
    int random_number = rand() % 700;
    setPos(random_number, 0);
    // Imagem do inimigo
    setPixmap(QPixmap(":/images/qt_enemy.png"));

    // Movimentação
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);
}

void Enemy::move()
{
    setPos(x(), y() + 5);
    if (pos().y() > 600)
    {
        game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
}
