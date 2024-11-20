#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsItem>
#include <QDebug>
#include <QKeyEvent>

#include "player.h"
#include "bullet.h"
#include "enemy.h"

Player::Player(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/lol_fechado.png"));

    bulletSound = new QMediaPlayer();
    bulletSound->setMedia(QUrl("qrc:/sounds/funny.mp3"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
        // Limite para não sair da tela
        if (pos().x() > 0)
        {
            setPos(x() - 10, y());
        }
    }
    else if (event->key() == Qt::Key_Right)
    {
        // Limite para não sair da tela
        if (pos().x() + 100 < 800)
        {
            setPos(x() + 10, y());
        }
    }
    else if (event->key() == Qt::Key_Up)
    {
        setPos(x(), y() - 10);
    }
    else if (event->key() == Qt::Key_Down)
    {
        setPos(x(), y() + 10);
    }
    // Criar tiro (bullet)
    else if (event->key() == Qt::Key_Space)
    {
        setPixmap(QPixmap(":/images/lol_aberto.png"));

        Bullet *bullet = new Bullet();
        bullet->setPos(x(), y());
        scene()->addItem(bullet);

        if (bulletSound->state() == QMediaPlayer::PlayingState)
        {
            bulletSound->setPosition(0);
        }
        else if (bulletSound->state() == QMediaPlayer::StoppedState)
        {
            bulletSound->play();
        }
    }
}

void Player::keyReleaseEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Space)
    {
        setPixmap(QPixmap(":/images/lol_fechado.png"));
    }
}

void Player::spawn()
{
    // Criar inimigo (enemy)
    Enemy *enemy = new Enemy();
    scene()->addItem(enemy);
}
