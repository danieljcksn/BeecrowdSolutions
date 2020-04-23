//Questão 1012 - Área - URI Online Judge
#include <stdio.h>

int main(){
    int a, b, c;
    int m, maior;

    scanf("%i %i %i", &a, &b, &c);
    m = ((a+b+abs(a-b))/2);
    maior = ((m+c+abs(m-c))/2);
    printf("%i eh o maior\n", maior);

    return 0;
}
