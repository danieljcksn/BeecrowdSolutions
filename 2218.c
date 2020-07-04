//Problema 2218 - O Temível Evil-Son - URI Online Judge
#include <stdio.h>

int main(){
    int t, i, n, gap, regioes;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        gap = 2;
        regioes = 2;
        for(i = 1; i < n; i++){
            regioes += gap;
            gap++;
        }

        printf("%d\n", regioes);
    }

    return 0;
}