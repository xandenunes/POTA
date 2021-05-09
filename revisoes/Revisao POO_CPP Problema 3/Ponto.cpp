#include <cmath>
#include "Ponto.h"
Ponto::Ponto() {
    m_x=0;
    m_y=0;
}
Ponto::Ponto(float x,float y) {
    m_x=x;
    m_y=y;
}
float Ponto::getX()  {
    return m_x;
}
void Ponto::setX(float x) {
    m_x = x;
}
float Ponto::getY()  {
    return m_y;
}
void Ponto::setY(float y) {
    m_y = y;
}
float Ponto::distancia(Ponto p)  {
    float dist;
    dist=sqrt(pow(m_x-p.getX(),2)+pow(m_y-p.getY(),2));
    p.m_x=0;
    p.m_y=0;
    return dist;
}