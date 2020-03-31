#include <stdio.h>

int main(void){
    int numeros[5], i;
    int pares = 0, impares = 0, negativos = 0, positivos = 0;

    for(i=0; i<5; i++){
        scanf("%d", &numeros[i]);
        if(numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
        if(numeros[i] > 0)
            positivos++;
        else{
            if(numeros[i] < 0){
                negativos++;
            }    
        }
    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}