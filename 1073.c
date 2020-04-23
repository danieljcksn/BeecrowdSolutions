//Questão 1073 - Quadrado de Pares - URI Online Judge
#include <math.h>
#include <stdio.h>

int main(void){
    int n, i;
    unsigned long long int quadrado;

    scanf("%d", &n);
    for(i = 2; i <= n; i += 2){
        quadrado = pow(i, 2);
        printf("%d^2 = %llu\n", i, quadrado);
    }


    return 0;
}
