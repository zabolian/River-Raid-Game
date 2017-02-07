#include "bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "enemy.h"
#include<typeinfo>
Bullet::Bullet(): QObject(), QGraphicsRectItem(){
    int random_number = rand() % 700;
    setPos(random_number, 0);

    setRect(0,0,0,0);
    QTimer * timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);

}

void Bullet::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0, n = colliding_items.size(); i < n; ++i ){
        if(typeid(*(colliding_items[i])) == typeid(Enemy)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    setPos(x(), y() - 10);
    if(pos().y()+ rect().height() < 0)
        scene()->removeItem(this);
        delete this;

}
