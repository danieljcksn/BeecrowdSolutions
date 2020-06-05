//Questão 2597 - Xelongão - URI Online Judge

/*
Dica: olhar a sequência de resultados do uDebug e notar o padrão. Não consigo escrever
qual é o padrão e explicar o código kkk.
*/
#include <stdio.h>

int main(){
    int c, n, i, max, atual;

    scanf("%d", &c);
    while(c--){
        scanf("%d", &n);
        
        if(n == 2 || n == 3)
            printf("%d\n", n-1);
        else{
            max = 5;
            atual = 2;
            for(i = 4; i <= n;){
                if(i + max > n)
                    break;
                else{
                    i += max;
                    max += 2;
                    atual++;
                }
            }
            printf("%d\n", n - atual);
        }
    }

    return 0;
}