//Problema 3059 - Pares de Números - URI Online Judge
#include <stdio.h>

int main(){
    int n, i, f, k, w;

    scanf("%d %d %d", &n, &i, &f);

    int vet[n];
    for(k = 0; k < n; k++)
        scanf("%d", &vet[k]);


    int pares = 0, soma;
    for(k = 0; k < n; k++){
        for(w = k + 1; w < n; w++){
            soma = vet[k] + vet[w];
            if(soma >= i && soma <= f)
                pares++;
        }
    }

    printf("%d\n", pares);
    
    return 0;
}