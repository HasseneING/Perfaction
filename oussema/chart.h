#ifndef CHART_H
#define CHART_H

#include <QWidget>

class chart : public QWidget
{
    Q_OBJECT
public:
    explicit chart(QWidget *parent = nullptr);
public:
    void paintEvent(QPaintEvent *);

signals:

};

#endif // CHART_H
