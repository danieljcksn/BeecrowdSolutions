//Questão 3060 - Parcelamento sem Juros - URI Online Judge
#include <stdio.h>

int main(){
    int v, p, resto, i, parcela, contador;

    scanf("%d %d", &v, &p);
    parcela = v / p;
    resto = v % p;
    if(resto == 0){
        for(i = 0; i < v; i += parcela)
            printf("%d\n", parcela);
    }else{
        contador = 0;
        while(resto > 0){
            contador += parcela + 1;
            printf("%d\n", parcela + 1);
            resto--;
        }
        for(i = contador; i < v; i += parcela)
            printf("%d\n", parcela);
    }


    return 0;
}