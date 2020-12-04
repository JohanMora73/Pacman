#include "puntos.h"

puntos::puntos()
{
}

puntos::puntos( int x, int y)
{
    posx = x;
    posy = y;
    setPos(posx,posy);//asignamos la posicion de los puntos
}
QRectF puntos::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}
void puntos::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    //dibujamos el punto
    painter->setBrush(Qt::yellow);
    painter->drawEllipse(boundingRect());
}
