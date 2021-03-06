#ifndef SCORE_H
#define SCORE_H

#include<QGraphicsTextItem>
#include<QDebug>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem* parent = 0);
    ~Score();
    int getScore() const;
    void setScore(int value);
public slots:
    void increase(int value);

private:
    int score;

};

#endif // SCORE_H
