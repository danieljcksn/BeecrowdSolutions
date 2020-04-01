#include <stdio.h>

int main(void){
    unsigned long long int partes, n;

    scanf("%llu", &n);
    
    partes = 1 + (((n-1)*n)/2) + ((n*(n - 1)*(n - 2)*(n - 3))/24);

    printf("%llu\n", partes);


    return 0;
}