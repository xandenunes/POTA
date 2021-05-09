#ifndef PONTO_H
#define PONTO_H

class Ponto {
private:
    float m_x,m_y;
public:
    Ponto();
    Ponto(float,float);
    float getX();
    void setX(float);
    float getY();
    void setY(float);
    float distancia(Ponto);
};

#endif /* PONTO_H */

