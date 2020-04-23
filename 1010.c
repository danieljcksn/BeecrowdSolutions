//Questão 1010 - Cálculo Simples - URI Online Judge

#include <stdio.h>
 
int main() {
 
    int CP1, NP1, CP2, NP2;
    float VU1, VU2, TOTAL;
    
    scanf("%i %i %f", &CP1, &NP1, &VU1);
    scanf("%i %i %f", &CP2, &NP2, &VU2);
    TOTAL = VU1*NP1 + VU2*NP2;
    printf("VALOR A PAGAR: R$ %.2f\n", TOTAL);
    
    return 0;
}
