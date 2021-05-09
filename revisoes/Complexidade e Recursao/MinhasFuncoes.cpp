#include "MinhasFuncoes.h"

int somaCubo (int n) {
	int somaParcial=0;
	for (int i=1;i<=n;i++) {
		somaParcial+=i*i*i;
	}
	return somaParcial;
}
int isIn (int chave,int* a, int length) {
    for (int i=0;i<length;i++) {
        if (chave==a[i]) 
            return i;
    }
    return -1;
}

void ordena(int* a, int length) {
    int aux;
    for (int i=0;i<length;i++) {
        for (int j=i+1;j<length;j++) {
            if(a[i]>a[j]) {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
} 
int isInBinario (int chave,int* a, int length) {
	int baixo=0;int meio;int alto= length -1;
	while (baixo<=alto) {
                 meio=(baixo+alto)/2;
	    if (chave==a[meio]) 
                     return meio;
	    else if (chave<a[meio]) 
                     alto=meio-1;
                 else
                     baixo=meio+1;
	}
	return -1;
}

long g(long x) {
    return 2*x*x+x+1;
}

long h (long x) {
    if (x==1) 
        return 1;
    else 
    return x*x*x + h(x-1);
}
long fat (long x) {
    if (x==1) 
        return 1;
    else 
        return x * fat(x-1);
    }    
long fibrec (long n) {
    if (n<=1) 
        return 1;
    else
        return fibrec(n-1)+fibrec(n-2); 
}
long fib (int n) {
    if (n<=1) 
        return 1;
    long* seq = new long[n+1];
    seq[0]=1;seq[1]=1;
    for(int i=2;i<=n;i++)
        seq[i]=seq[i-1]+seq[i-2];
    return seq[n];  
}



   
