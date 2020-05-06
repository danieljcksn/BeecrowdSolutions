//Questão 3050 - Distância entre amigos - URI Online Judge
#include <stdio.h>

int main(){
    int N, i, j, maior = 0, distancia;

    scanf("%d", &N);
    int predios[N];
    
    for(i = 0; i < N; i++)
        scanf("%d", &predios[i]);
    
    for(i = 0; i < N ; i++){
        for(j = i; j < N; j++){
            distancia = predios[i] + (j - i) + predios[j];
            if(distancia > maior)
                maior = distancia;
        }
    }

    printf("%d\n", maior);

    return 0;
}