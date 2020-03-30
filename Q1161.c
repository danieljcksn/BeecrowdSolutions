#include <stdio.h>

unsigned long long int calculaFatorial(int n){
    unsigned long long int fatorial = n;
    int i = n-1;
    if(n == 0)
        return 1;
    else if(n == 1)
        return 1;

    while(i>0){
        fatorial = fatorial * i;
        i--;
    }

    return fatorial;
}


int main(void){
    int n1, n2;
    unsigned long long int resultado, fatorial1, fatorial2;
    while(scanf("%d", &n1) != EOF && scanf("%d", &n2) != EOF){
        fatorial1 = calculaFatorial(n1);
        fatorial2 = calculaFatorial(n2);
        resultado = fatorial1 + fatorial2;
        printf("%llu\n", resultado);
    }  

    return 0;
}