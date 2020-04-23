//Questão 2936 - Quanta Mandioca? - URI Online Judge
#include <stdio.h>

int main(void){
    int porcoes[5] = {300, 1500, 600, 1000, 150}, i, total=0, quantidade;

    for(i = 0; i < 5; i++){
        scanf("%d", &quantidade);
        porcoes[i] = porcoes[i] * quantidade;
    }

    for(i = 0; i < 5; i++)
        total += porcoes[i];

    total += 225;
    printf("%d\n", total);


    return 0;
}
