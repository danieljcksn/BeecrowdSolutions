//Questão 1071 - Soma de Ímpares Consecutivos I - URI Online Judge
#include <stdio.h>

int main(void){
    int x, y, i, soma = 0;

    scanf("%d %d", &x, &y);
    if(y == x){
        printf("0\n");
        return 0;
    }
    if(y % 2 == 0 && x % 2 != 0){
        for(i = y+1; i <= (x-2); i+=2)
            soma += i;
    }else{
        if(y % 2 != 0 && x % 2 != 0){
            for(i = y+2; i <= (x-2); i+=2)
                soma += i;
        }else{
            if(y % 2 != 0 && x % 2 == 0){
                for(i = y+2; i <= (x-1); i+=2)
                    soma += i;
            }else{
                for(i = y+1; i <= (x-1); i+=2)
                    soma += i;
            }
        }
    }

    printf("%d\n", soma);

    return 0;
}
