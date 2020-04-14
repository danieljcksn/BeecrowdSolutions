#include <stdio.h>

int main(void){
    int c, i, j;
    float m[12][12], soma = 0.0, media, elementos = 0;
    char o;

    o = getc(stdin);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++)
            scanf("%f", &m[j][i]);
    }
    for(i = 6; i < 12; i++){
        for(j = 12 - i; j < i; j++){
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