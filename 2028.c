//Questão 2028 - Sequência de Sequência - URI Online Judge
#include <stdio.h>

int main(void){
    int n, i, j, contador = 0, casos = 1, totalNumeros;

    while(scanf("%d", &n) != EOF){
        totalNumeros = 0;
        for(i = 0; i <= n; i++){
            if(i == 0){
                totalNumeros++;
                continue;
            }
            for(j = i; j > 0; j--)
                totalNumeros++;
        }
        if(totalNumeros == 1){
            printf("Caso %d: 1 numero\n", casos);
            printf("0\n\n");
            casos++;
            continue;
        }
        else
            printf("Caso %d: %d numeros\n", casos, totalNumeros);
        
        for(i = 0; i <= n; i++){
            if(i == 0){
                printf("0 ");
                continue;
            }
            for(j = i; j > 0; j--){
                if(i == n){
                    if(j == 1)
                        printf("%d\n", i);
                    else
                        printf("%d ", i);
                }
                else
                    printf("%d ", i);
            }
        }
        printf("\n");
        casos++;
    }

    return 0;
}
