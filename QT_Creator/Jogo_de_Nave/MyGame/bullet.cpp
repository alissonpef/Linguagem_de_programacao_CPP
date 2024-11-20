#include <QGraphicsScene>
#include <QTimer>
#include <QDebug>
#include <QList>

#include "bullet.h"
#include "game.h"
#include "enemy.h"

// declaração da variavel do tipo extern
extern Game *game;

Bullet::Bullet(QGraphicsItem *parent) : QObject(), QGraphicsPixmapItem(parent)
{
    // Imagem do tiro
    setPixmap(QPixmap(":/images/kk_tiro.png"));

    // Conectar o timer com o movimento
    QTimer *timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    // Inicializar o timer
    timer->start(50);
}

void Bullet::move()
{
    // Verificação de colisão
    QList<QGraphicsItem *> colliding_items = collidingItems();
    // Se o tiro atingiu o inimigo
    for (int i = 0, n = colliding_items.size(); i < n; ++i)
    {
        if (typeid(*(colliding_items[i])) == typeid(Enemy))
        {
            game->score->increase();
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            delete colliding_items[i];
            delete this;
            return;
        }
    }

    // Movimentação do tiro
    setPos(x(), y() - 10);

    if (pos().y() < -10)
    {
        scene()->removeItem(this);
        delete this;
    }
}
