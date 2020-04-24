//Questão 3036 - Cor da Camisa - URI Online Judge
#include <stdio.h>
#include <math.h>


int main(){
    double lambda, v, result, dividendo, divisor, c = 300000000.0;
    scanf("%lf", &v);

    if(v < 0)
        v = v * -1;
    //Valores necessários para a utilização da fórmula
    dividendo = c - v;
    divisor = c + v;
    result = dividendo / divisor;

    lambda = 700.0 * sqrt(result);
    if(lambda < 400.0)
        printf("invisivel\n");
    else if(lambda < 425.0)
        printf("violeta\n");
    else if(lambda < 445.0)
        printf("anil\n");
    else if(lambda < 500.0)
        printf("azul\n");
    else if(lambda < 575.0)
        printf("verde\n");
    else if(lambda < 585.0)
        printf("amarelo\n");
    else if(lambda < 620.0)
        printf("laranja\n");
    else if(lambda < 750.0)
        printf("vermelho\n");
    else
        printf("invisivel\n");

    return 0;
}
