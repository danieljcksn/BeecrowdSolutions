//Problema 2135 - Recuperação - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, i, instancia = 1, soma;
    bool flag;

    while(scanf("%d", &n) != EOF){
        int vet[n];

        for(i = 0; i < n; i++)
            scanf("%d", &vet[i]);

        soma = vet[0];
        
        flag = false;
        for(i = 1; i < n; i++){
            if(soma == vet[i]){
                flag = true;
                break;
            }
            soma += vet[i];
        }

        if(vet[0] == 0)
            printf("Instancia %d\n0\n", instancia);
        else{
            if(flag)
                printf("Instancia %d\n%d\n", instancia, vet[i]);
            else 
                printf("Instancia %d\nnao achei\n", instancia);
        }
        
        printf("\n");
        instancia++;
    }

    return 0;
}