//Questão 3047 - A Idade de Dona Mônica - URI Online Judge
#include <stdio.h>

int main(){
    int m, filhos[3], maior, i;
    scanf("%d %d %d", &m, &filhos[0], &filhos[1]);
 
    filhos[2] = m - (filhos[0] + filhos[1]);
    maior = filhos[0];
    for(i = 1; i < 3; i++)
        if(maior < filhos[i])
            maior = filhos[i];

    printf("%d\n", maior);
    return 0;
}
