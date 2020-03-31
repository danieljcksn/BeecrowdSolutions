#include <stdio.h>

int main(void){
    float numeros[6], soma = 0, media;
    int i, numPositivos = 0;

    for(i=0; i<6; i++){
        scanf("%f", &numeros[i]);
        if(numeros[i] > 0){
            soma += numeros[i];
            numPositivos++;
        }
    }

    media = soma / numPositivos;
    printf("%d valores positivos\n", numPositivos);
    printf("%.1f\n", media);


    return 0;
}