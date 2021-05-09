#include <cmath>
#include <iostream>
#include "Circulo.h"
using namespace std;
Circulo::Circulo() {
    m_centro=new Ponto();
    m_raio=1;
}
Circulo::Circulo(Ponto* centro, float raio) {
    m_centro=centro;
    m_raio=raio;
}
float Circulo::getRaio() {
    return m_raio;
}
void Circulo::setRaio(float raio) {
    m_raio=raio;
} 
Ponto* Circulo::getCentro() {
    return m_centro;
}
void Circulo::setCentro(Ponto* centro) {
    m_centro=centro;
}
float Circulo::area() {
    return M_PI*pow(m_raio,2);
}
float Circulo::perimetro() {
    return 2*M_PI*m_raio;
}
bool Circulo::pertence(Ponto* p) {
    float dist=m_centro->distancia(p);
    if (dist<=m_raio) 
        return true;
    else 
        return false;
}
Circulo::~Circulo() {
    delete m_centro;
}