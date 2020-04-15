#include <stdio.h>

int main(void){
    int T, N, i;
    unsigned long long int fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i < 61; i++)
        fib[i] = fib[i-1] + fib[i-2];

    scanf("%d", &T);
    while(T > 0){
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
        T--;    
    }




    return 0;
}