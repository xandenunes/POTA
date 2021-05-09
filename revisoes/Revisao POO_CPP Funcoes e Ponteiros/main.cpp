#include <cstdlib>
#include <iostream>
using namespace std;
void troca(int* a,int* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void troca(int a,int b) {
    int temp=a;
    a=b;
    b=temp;
}
int main(int argc, char** argv) {
    int x=1,y=2;
    cout<<"x="<<x<<" e "<<"y="<<y<<endl;
    troca(x,y);
    cout<<"x="<<x<<" e "<<"y="<<y<<endl; 
   
    int a; //uma variável do tipo inteiro
    int *ptr; // um ponteiro para uma variável inteira
    a=7; 
    ptr=&a;
    cout<<"O valor da variável a="<<a<<endl;
    cout<<"O endereco da variavel a="<<&a<<endl;
    cout<<"O endereco da variavel a="<<ptr<<endl;
    cout<<"O endereco da variavel ptr="<<&ptr<<endl;
    *ptr=10;
    cout<<"O valor da variável a="<<a<<endl;
    cout<<"O endereco da variavel a="<<&a<<endl;
    cout<<"O endereco da variavel a="<<ptr<<endl;

    int b=*ptr*a; 
    cout<<"O valor da variável b="<<b<<endl;


    return 0;
}

