#include <stdio.h>
 
int main() {
 
    int A, B, C, D, DIFERENCA;
    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);
    return 0;
}