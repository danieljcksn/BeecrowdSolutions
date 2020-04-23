//Questão 1151 - Fibonacci Fácil - URI Online Judge
#include <stdio.h>

int main(){
    int n, i;

    scanf("%d", &n)
    unsigned long int fatorial[n];
    fatorial[0] = 0;
    fatorial[1] = 1;
    for(i = 2; i < n; i++)
        fatorial[i] = fatorial[i-1] + fatorial[i-2];
    
    for(i = 0; i < n; i++){
        if(i != n-1)
            printf("%lu ", fatorial[i]);;
        else
            printf("%llu\n", fatorial[i]);
    }


    return 0;
}
