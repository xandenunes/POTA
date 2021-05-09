#ifndef GEOMETRIA_H
#define GEOMETRIA_H
typedef struct {
	float x,y;
} Ponto;
typedef struct {
	Ponto centro;
	float raio;
} Circulo;
float area(Circulo);
float perimetro(Circulo);
bool pertence(Ponto,Circulo);
#endif /* GEOMETRIA_H */
