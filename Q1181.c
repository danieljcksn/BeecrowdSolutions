#include <stdio.h>

int main(void){
    int l, i, j;
    float m[12][12], soma = 0.0, media;
    char t;

    scanf("%d ", &l);
    t = getc(stdin);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++)
            scanf("%f", &m[i][j]);
    }
    for(i = 0; i < 12; i++)
        soma += m[l][i];

    if(t == 'S')
        printf("%.1f\n", soma);
    else{    
        media = soma / 12;
        printf("%.1f\n", media);
    }

    return 0;
}