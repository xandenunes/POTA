#ifndef CIRCULO_H
#define CIRCULO_H
#include "Ponto.h"
class Circulo {
private:
    float m_raio;
    Ponto* m_centro;
public:    
    Circulo();
    Circulo(Ponto*,float);
    float getRaio();
    void setRaio(float); 
    Ponto* getCentro();
    void setCentro(Ponto*);
    float area();
    float perimetro();
    bool pertence(Ponto* p);
    ~Circulo();
};

#endif /* CIRCULO_H */

