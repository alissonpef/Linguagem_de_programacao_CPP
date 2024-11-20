#include <QGraphicsTextItem>
#include <QTimer>
#include <QImage>
#include <QBrush>
#include <QMediaPlayer>
#include <QMediaPlaylist>

#include "game.h"
#include "enemy.h"

Game::Game(QWidget *parent)
{
    // Criar scene
    scene = new QGraphicsScene();
    // Fixa tamanho em 800x600
    scene->setSceneRect(0, 0, 800, 600);
    scene->setBackgroundBrush(QBrush(QImage(":/images/Arco_iris.png")));
    // Visualiza o cenário
    setScene(scene);

    // Desabilita as barras de rolagem
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800, 600);

    // Criar o jogador
    player = new Player();
    player->setPos(400, 500);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    // Adicionar o jogador no cenário
    scene->addItem(player);

    // Criar inimigos
    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), player, SLOT(spawn()));
    timer->start(2000);

    // Adicionar contagem de pontos e vida do jogador
    score = new Score();
    scene->addItem(score);
    health = new Health();
    health->setPos(health->x(), health->y() + 25);
    scene->addItem(health);

    // Adicionar som de fundo
    QMediaPlaylist *playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl("qrc:/sounds/Fluffing a Duck.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    // Adicionar som de fundo
    QMediaPlayer *music = new QMediaPlayer(this);
    music->setPlaylist(playlist);
    music->play();

    show();
}
