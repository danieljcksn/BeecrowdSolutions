#include <stdio.h>

int main(void){
    int x, digitos;
    int i, n;

    while(scanf("%d", &x) != 0){
        n = 1;
        digitos = 1;
        while(n % x != 0){
            n = (10 * n + 1) % x;
            digitos++;
        }
        printf("%d\n", digitos);
    }

    return 0;
}