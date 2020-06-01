//Questão 1457 - Oráculo de Alexandria - URI Online Judge
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

unsigned long long int kFatorial(int n, int k){
    int i;
    unsigned long long int result = n;
    //Result armazenará n * n-ik * n-(i+1)k ...
    i = 1;
    //Loop 'infinito' 
    while(true){
        //Caso a diferença seja inferior a 1, encerra.
        if((n - i*k) < 1)
            break;
        
        result *= n - i*k;
        i++;
    }

    return result;
}


int main(){
    int n, t, k, i, j;
    char c, nStr[121];
    unsigned long long int result;    
    bool flag;

    scanf("%d", &t);

    while(t--){
        //Lê o número com os '!' e armazena em uma string.
        scanf("%s", nStr);
        
        k = 0;
        //Loop para contar a quantidade de Ks.
        for(i = strlen(nStr) - 1; ; i--){
            //Enquanto o caractere indicado por nStr[i] for '!', incrementa a quantidade de Ks. Encerra o laço quando encontra um número.
            if(nStr[i] != '!')
                break;
            else
                k++;
        }
        /*
        Ao final do loop, a variável 'i' possuirá a posição do último dígito do número.
        Ao adicionar nStr[i+1] = '\0' elimina todos caracteres a partir da posição i+1. Ou seja, elimina todas exclamações da string
        Restando apenas o número.
        */
        nStr[i+1] = '\0';

        //A função atoi converte a string para um número inteiro e armazena na variável n.
        n = atoi(nStr);
        
        //Chama, agora, a função para cálculo do fatorial.
        result = kFatorial(n, k); 
        printf("%llu\n", result);
    }
    return 0;
}