#include <cstdlib>
#include <iostream>
#include "minhasfuncoes.h"
using namespace std;
int main(int argc, char** argv) {
    int i,j; // variáveis para armazenar os números a serem testados
    int menor; // variável para guardar o resultado
    // leitura dos dados
    cout<<"Informe dois números"<<endl;
    cin>>i;
    cin>>j;
    // cálculos
    menor=min(i,j);
    // impressão do resultado
    cout<<"Menor número="<<menor<<endl;    
    return 0;
}