#include <stdio.h>

int main(void){
    double N[100], x;
    int i;
    scanf("%lf", &N[0]);
    for(i = 1; i < 100; i++)
        N[i] = N[i-1] / 2;

    for(i = 0; i < 100; i++)
        printf("N[%d] = %.4lf\n", i, N[i]);

    return 0;
}