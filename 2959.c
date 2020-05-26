//Questão 2959 - Credo com ParaTudo! - URI Online Judge
//Resolvido usando o algoritmo de Floyd-Warshall. Veja https://www.programiz.com/dsa/floyd-warshall-algorithm
#include <stdio.h>

#define INF 999999


int main(){
    int n, conexoes, perguntas, a, b, k, l;

    scanf("%d %d %d", &n, &conexoes, &perguntas);


    //Preenche a matriz de adjascência com valores 0. Essa matriz armazenará as distâncias entre cada par de vértices.
    int matrizAdj[n+1][n+1];
    int i, j;
    for(i = 0; i < n+1; i++){
        for(j = 0; j < n+1; j++){
            //Inicia todas as distâncias como infinito.
            matrizAdj[i][j] = INF;
        }
    }
    while(conexoes--){
        scanf("%d %d", &a, &b);
        // Se existe um caminho entre os dois vértices, consideraremos a distancia entre eles como 1. 
        // Não faz diferença o custo do caminho. Apenas desejamos saber se há um caminho entre os vértices.
        matrizAdj[a][b] = 1;
        matrizAdj[b][a] = 1;
    }

    for(k = 0; k <= n; k++){
        for(i = 0; i <= n; i++){
            for(j = 0; j <= n; j++){
                if(matrizAdj[i][k] + matrizAdj[k][j] < matrizAdj[i][j])
                    matrizAdj[i][j] = matrizAdj[i][k] + matrizAdj[k][j];
            }
        }
    }
    while(perguntas--){
        scanf("%d %d", &k, &l);
        //Caso a distancia seja infinita, não há caminho entre os dois vertices.
        if(matrizAdj[k][l] == INF || matrizAdj[l][k] == INF) 
            printf("Deu ruim\n");
        else
            printf("Lets que lets\n");
    }
    return 0;
}