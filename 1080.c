//Questão 1080 - Maior e Posição - URI Online Judge
#include <stdio.h>

int main(){
    int numeros[100], i, maior;

    for(i = 0; i < 100; i++)
        scanf("%d", &numeros[i]);

    maior = 0;
    for(i = 1; i < 100; i++){
        if(numeros[maior] < numeros[i])
            maior = i;
    }

    printf("%d\n%d\n", numeros[maior], maior+1);
    return 0;
}
