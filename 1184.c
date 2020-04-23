//Questão 1184 - Abaixo da Diagonal Principal - URI Online Judge
#include <stdio.h>

int main(void){
    int c, i, j;
    float m[12][12], soma = 0.0, media, elementos = 0;
    char o;

    o = getc(stdin);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++)
            scanf("%f", &m[i][j]);
    }
    for(i = 0; i < 12; i++){
        for(j = i - 1; j >= 0; j--){
            soma += m[i][j];
            elementos++;
        }
    }

    if(o == 'S')
        printf("%.1f\n", soma);
    else{    
        media = soma / elementos;
        printf("%.1f\n", media);
    }

    return 0;
}
