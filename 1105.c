//Questão 1105 - Sub-prime - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

int main(){
    int b, n, i, d, c, v;
    bool negativo;

    while(true){
        scanf("%d %d", &b, &n);

        if(!b && !n)
            break;
        
        negativo = false;
        //Vetor para armazenar as reservas monetárias
        int reservas[b+1];
        for(i = 1; i < b+1; i++)
            scanf("%d", &reservas[i]);

        for(i = 0; i < n; i++){
            scanf("%d %d %d", &d, &c, &v);
            //Retira o valor v do banco D
            reservas[d] = reservas[d] - v;
            //E deposita no banco C
            reservas[c] = reservas[c] + v;
        }

        //Verifica se há algum banco negativado.
        for(i = 1; i < b + 1; i++){
            if(reservas[i] < 0){
                negativo = true;
                break;
            }
        }

        if(negativo)
            printf("N\n");
        else
            printf("S\n");
    }

    return 0;
}