//Questão 1989 - Fazendo Nada - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

int main(){
    int seasons, duration, i, j;
    unsigned long long int total;
    while(true){
        scanf("%d %d", &seasons, &duration);

        if(seasons == -1 & duration == -1)
            break;
        
        //Lê a quantidade de episódios por cada temporada
        int eps[seasons];
        for(i = 0; i < seasons; i++)
            scanf("%d", &eps[i]);

        total = 0;
        //Armazena o somatório dos episodios assistidos.
        unsigned long long int somas[seasons];
        for(i = 0; i < seasons; i++){
            total += eps[i];
            somas[i] = total;
        }   

        total = 0;
        //Armazena o tempo decorrido pra assistir o episodio atual e 'reprisar' todos episodios anteriores.
        for(i = 0; i < seasons; i++)
            total += somas[i];

        /* Possível solução O(n²):
        for(i = 0; i < seasons; i++){
            for(j = 0; j <= i; j++)
                total += eps[j];
        } 
        */  

        printf("%llu\n", duration * total);
    }

    return 0;
}