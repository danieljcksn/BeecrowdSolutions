//Questão 3068 - Meteoros - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, x1, y1, x2, y2, m1, m2, testes = 1, meteoritos;

    while(true){
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        //Caso todos sejam zero
        if(!x1 && !x2 && !y1 && !y2)
            break;

        //Zera a quantidade de meteoritos que atingiram a fazenda.
        meteoritos = 0;
        printf("Teste\n%d\n", testes);
        scanf("%d", &n);
        while(n > 0){
            scanf("%d %d", &m1, &m2); //(m1, m2) - Coordenada do meteorito
            //Caso esteja dentro dos limites da fazenda.
            if(m1 >= x1 && m1 <= x2){
                if(m2 <= y1 && m2 >= y2)
                    meteoritos++;
            }
            n--;
        }
        printf("%d\n", meteoritos);

        testes++;
    }
    return 0;
}