#include <stdio.h>

int main(void){
    int numeros[5], i;
    int pares = 0, impares = 0, negativos = 0, positivos = 0;

    for(i=0; i<5; i++){
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0)
            numPares++;
    }
    printf("%d valores pares\n", numPares);
    return 0;
}