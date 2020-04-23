//Questão 1072 - Intervalo 2 - URI Online Judge
#include <stdio.h>

int main(void){
    int n, i, in = 0, out = 0, x;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in++;
        else
            out++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
