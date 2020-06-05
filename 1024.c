//Questão 1024 - Criptografia - URI Online Judge
#include <stdio.h>
#include <string.h>

int main(void){
    int n, i, j, k, cont;

    scanf("%d ", &n);

    char linhas[n][1001], aux[10001];
    for(i = 0; i < n; i++){
        scanf(" %[^\n]s\n", linhas[i]);

        //Deslocando três posições para a direita
        for(k = 0; k < strlen(linhas[i]); k++){
            if((linhas[i][k] >= 65 && linhas[i][k] <= 90) || (linhas[i][k] >= 97 && linhas[i][k] <= 122))
                linhas[i][k] = linhas[i][k] + 3;
        }
        
        //Criando uma cópia auxiliar da string
        strcpy(aux, linhas[i]);
        cont = strlen(linhas[i]) - 1;
        for(k = 0; k < strlen(linhas[i]); k++){
            linhas[i][k] = aux[cont];
            cont--;
        }
        //Deslocando uma posição para a esquerda
        for(k = strlen(linhas[i]) / 2; k < strlen(linhas[i]); k++)
            linhas[i][k] = linhas[i][k] - 1;
    }

    for(i = 0; i < n; i++)
        printf("%s\n", linhas[i]);
        
    return 0;
}