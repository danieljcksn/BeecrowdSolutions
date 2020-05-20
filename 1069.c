//Questão 1069 - Diamantes de Areia - URI Online Judge
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int n, i, diamantes, abertura, fechamento;
    char inp[1005];

    scanf("%d", &n);
    while(n--){
        scanf("%s", inp);

        abertura = 0;
        fechamento = 0;

        for(i = 0; i < strlen(inp); i++){
            switch(inp[i]){
                //Caso seja caractere de abertura, empilha
                case '<':
                    abertura++;
                    break;

                //Caso seja de fechamento, se a pilha não estiver vazia, desempilha e incrementa o numero de diamantes
                case '>':
                    if(fechamento < abertura)
                        fechamento++;
                    break;
                
                default:
                    break;
            }
        }

        //O total de diamantes é a quantidade de aberturas + fechamentos  - a diferença entre eles (aberturas sem fechamentos e vice-versa).
        diamantes = ((abertura + fechamento) - abs(abertura - fechamento)) / 2;
        printf("%d\n", diamantes);
    }



    return 0;
}