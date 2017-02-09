#ifndef RIVER_H
#define RIVER_H

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "player.h"
#include "enemy.h"
#include "bullet.h"
#include <QTimer>
#include <QWidget>
#include <QBrush>
#include <QImage>
#include "score.h"
#include "health.h"
#include<QObject>
#include "gameover.h"

class River : public QGraphicsView{
public:
    const int shipHitScore = 30;
    const int helikopterHitScore = 60;
    const int jetHitScore = 100;
    const int balloonHitScore = 60;
    const int fuelHitScore = 150;
    const int maxFuel = 100;

    River(QWidget* parent = 0);
    QGraphicsScene *scene;
    Player *player;
    Score * score;
    void Game_Over();
};

#endif // RIVER_H
