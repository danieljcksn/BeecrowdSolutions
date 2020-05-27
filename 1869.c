//Questão 1869 - Base 32 - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

int main(){
    unsigned long long int n;
    char tabela[33] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";
    int resto, indice, i;

    while(true){
        scanf("%llu", &n);

        if(!n){
            printf("0\n");
            break;
        }

        //Um vetor com 13 espaços de memória, pois o maior número de dígitos que um número possuirá é 13.
        int num[13], inseridos = 0;

        while(n != 0){
            resto = n % 32;
            n = n / 32;
            //'inseridos' guarda o número de dígitos do número.
            num[inseridos] = resto;
            inseridos++;
        }

        for(i = inseridos - 1; i >= 0; i--){
            indice = num[i];
            printf("%c", tabela[indice]);
        }
        printf("\n");
    }

    return 0;
}