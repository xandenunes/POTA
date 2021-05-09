#include "geometria.h"
#include <cmath>
float area(Circulo circ) {
    float a;
    a=M_PI * pow(circ.raio,2);
    return a;
}
float perimetro (Circulo circ) {
    float p;
    p=2* M_PI * circ.raio;
    return p;
}
bool pertence(Ponto point, Circulo circle) {
    float dist;
    dist=sqrt( pow(circle.centro.x-point.x,2) + pow(circle.centro.y-point.y,2) );
    if (dist<=circle.raio)
	return true;
    else 
	return false;
}

