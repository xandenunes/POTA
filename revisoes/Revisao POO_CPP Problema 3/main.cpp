#include <cstdlib>
#include <iostream>
#include "Ponto.h"
using namespace std;

int main(int argc, char** argv) {
// versão com instâncias
    // Variáveis (representação das entidades)
    Ponto p1; // um ponto
    Ponto p2; // um ponto
    float a,b; // variáveis auxiliares
    // leitura dos dados
    cout<<"Informe as coordenadas X e Y do primeiro ponto"<<endl;
    cin>>a;
    cin>>b;
    p1=Ponto(a,b);
    
    cout<<"Informe as coordenadas X e Y do segundo ponto"<<endl;
    cin>>a;
    cin>>b;
    p2=Ponto(a,b);
    
    // impressão da distância entre os pontos    
    cout<<"distancia="<<p1.distancia(p2)<<endl; 
    
/* Versão com Ponteiros
    // Variáveis (representação das entidades)
    Ponto* p1; // um ponto
    Ponto* p2; // um ponto
    float a,b; // variáveis auxiliares

    if (p1==NULL)
        cout<<"nulo"<<endl;
    cout<<"p1="<<p1<<endl;  
    // leitura dos dados
    cout<<"Informe as coordenadas X e Y do primeiro ponto"<<endl;
    cin>>a;
    cin>>b;
     p1->setX(a);
     p1->setY(b);
     p1=new Ponto(a,b);
    cout<<"Informe as coordenadas X e Y do segundo ponto"<<endl;
    cin>>a;
    cin>>b;
    p2=new Ponto(a,b);   
    
    // impressão da distância entre os pontos
    cout<<"distancia="<<p1->distancia(*p2)<<endl;  
    cout<<"distancia="<<p1->distancia(*p2)<<endl;  
    // dealocação da memória
    delete p1,p2;

 //   */    
    
    
    return 0;
}

