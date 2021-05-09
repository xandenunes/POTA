
#include <cstdlib>
#include <iostream>

#include "MinhasFuncoes.h"
#include <sys/time.h>

using namespace std;

int main(int argc, char** argv) {
    struct timeval start, end;
    double elapsed;
    int i=30;
    int size=100;
    int* vet=new int[size];

    // função não recursiva
    cout<<"g("<<i<<")="<<g(i)<<endl;
 
        // função recursiva
    cout<<"h("<<i<<")="<<h(i)<<endl;
    cout<<"somaCubo("<<i<<")="<<somaCubo(i)<<endl;
      
     // tempo de execução fib não recursivo
    gettimeofday(&start, NULL);     
    cout<<"fib("<<i<<")="<<fib(i)<<endl;    
    gettimeofday(&end, NULL);
    elapsed = ((end.tv_sec - start.tv_sec) / 1000) + (end.tv_usec - start.tv_usec);        
    cout<<"Tempo de execução Fibonacci não Recursivo(milisegundos)="<<elapsed<<endl;
    
    // tempo de execução fib recursivo
    gettimeofday(&start, NULL);    
    cout<<"fibrec("<<i<<")="<<fibrec(i)<<endl;
    gettimeofday(&end, NULL);
    elapsed = ((end.tv_sec - start.tv_sec) / 1000) + (end.tv_usec - start.tv_usec);   
    cout<<"Tempo de execução Fibonacci Recursivo(milisegundos)="<<elapsed<<endl;

    


  
     for(int i=0;i<100;i++) {
        vet[i]=rand()%size;
        cout<<vet[i]<<endl;
    }
    
    ordena(vet,size);
    cout<<"Ordenado"<<endl;
    for(int i=0;i<100;i++) {
        cout<<vet[i]<<endl;
    }    

    cout<<"is="<<isIn(56,vet,100)<<endl;
    cout<<"isBinario="<<isInBinario(56,vet,100)<<endl;     
   
    return 0;





    
}

