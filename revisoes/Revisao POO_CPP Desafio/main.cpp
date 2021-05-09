#include <cstdlib>
#include <iostream>
#include "Ponto.h"
#include "Circulo.h"
using namespace std;

int main(int argc, char** argv) {
    // Variáveis (representação das entidades)
    Circulo* c; // o circulo
    Ponto* p; // o ponto
    float x,y,r;
    // leitura dos dados
    cout<<"Informe as coordenadas X e Y do centro do círculo"<<endl;
    cin>>x;
    cin>>y;
    cout<<"Informe o raio do círculo"<<endl;
    cin>>r;
    c=new Circulo(new Ponto(x,y),r);
    cout<<"Informe as coordenadas X e Y do ponto"<<endl;
    cin>>x;
    cin>>y;
    p=new Ponto(x,y);
    // impressão da área e do perimetro
    cout<<"Area="<<c->area()<<endl;
    cout<<"Perimetro="<<c->perimetro()<<endl;
    
    // teste de inclusão 
    if (c->pertence(p))
	cout<<"o ponto está dentro"<<endl;
    else 
	cout<<"o ponto está fora"<<endl;
    
    delete c;
    delete p;
    return 0;
}

