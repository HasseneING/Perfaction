#include "chart.h"
#include <QSqlQuery>
#include <QVariant>
#include <QColor>
#include <QPainter>

chart::chart(QWidget *parent) : QWidget(parent)
{

}

void chart::paintEvent(QPaintEvent *)
{
    QSqlQuery query;
    query.prepare("SELECT count(idc) from CLIENTS ");
    query.exec();
    int nb;
    while (query.next()) {
     nb = query.value(0).toInt();
    }

    QSqlQuery query1;
    query1.prepare("SELECT count(idc) from CLIENTS where idf is null");
    query1.exec();
    int nb1;
    while (query1.next()) {
     nb1 = query1.value(0).toInt();
    }

    double h = (double) nb1 / (double) nb *360;
    QPainter painter(this);
    QRectF size = QRectF (10,10,this->width()-10,this->height()-10);
    painter.setBrush(QColor( 59, 106, 122));
    painter.drawPie(size,0,h*16);
    painter.setBrush(QColor(109,114,190));
    painter.drawPie(size,h*16,(360-h)*16);
}
