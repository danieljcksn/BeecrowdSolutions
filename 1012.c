//Questão 1012 - Área - URI Online Judge
#include <stdio.h>
 
int main() {
 
    double A, B, C, ATR, AC, AT, AQ, AR;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    ATR = (A * C)/2;
    AC = 3.14159 * (C*C); 
    AT = ((A+B) * C)/2; 
    AQ = B * B;
    AR = A * B;
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", ATR, AC, AT, AQ, AR);
    return 0;
}
