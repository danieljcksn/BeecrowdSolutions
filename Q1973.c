#include <stdio.h>
#include <stdbool.h>

int main(void){
    unsigned long long int n, i, atacadas = 0, naoRoubados = 0;
    scanf("%llu", &n);
    unsigned long long int estrelas[n], aux[n];

    for(i = 0; i < n; i++){
        scanf("%llu", &estrelas[i]);
        aux[i] = estrelas[i];
    }
    i = 0;
    while(1){
        if(estrelas[i] > 0){
            //Roubou um carneiro
            estrelas[i]--;
            //Se o número de carneiros era par ou ímpar...
            if((estrelas[i] + 1) % 2 == 0)
                i--;
            else
                i++;
        }else
            i--;
        

        if(i < 0 || i > n-1)
            break;
    }

    for(i = 0; i < n; i++){
        if(aux[i] != estrelas[i])
            atacadas++;
    }
    for(i = 0; i < n; i++)
        naoRoubados += estrelas[i]; 
    
    printf("%llu %llu\n", atacadas, naoRoubados);
    return 0;
}