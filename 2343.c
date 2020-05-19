//Questão 2343 - Caçadores de Mitos - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, x, y, i, j;

    scanf("%d", &n);

    bool coord[501][501]; //Cria um vetor com pra armazenar n coordenadas.

    //O vetor booleano é iniciado com todos os valores definidos como 0.
    for(i = 0; i < 501; i++){
        for(j = 0; j < 501; j++)
            coord[i][j] = false;
    }

    bool result = false;
    //n = número de raios
    for(i = 0; i < n; i++){
        //Coordenada de onde caiu o raio.
        scanf("%d %d", &x, &y);

        //Caso o elemento já esteja no vetor booleano, encerra as entradas.
        if(coord[x][y]){
            result = true;
            break;
        }

        //Caso não esteja no vetor, insere.
        coord[x][y] = true;
    }

        
    //Caso tenha encontrado, imprime 1. Imprime 0, caso contrário.
    if(result)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}