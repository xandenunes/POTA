#include <cstdlib>
#include <iostream>
//#include <cmath>
#include "geometria.h"
using namespace std;

int main(int argc, char** argv) {
    // Variáveis (representação das entidades)
    Circulo c; // o circulo
    Ponto p; // o ponto
    // leitura dos dados
    cout<<"Informe as coordenadas X e Y do centro do círculo"<<endl;
    cin>>c.centro.x;
    cin>>c.centro.y;
    cout<<"Informe o raio do círculo"<<endl;
    cin>>c.raio;
    cout<<"Informe as coordenadas X e Y do ponto"<<endl;
    cin>>p.x;
    cin>>p.y;
    
    // impressão da área e do perimetro
    cout<<"Area="<<area(c)<<endl;
    cout<<"Perimetro="<<perimetro(c)<<endl;
    
    // teste de inclusão 
    if (pertence(p,c))
	cout<<"o ponto está dentro"<<endl;
    else 
	cout<<"o ponto está fora"<<endl;
   
    return 0;
    
}

