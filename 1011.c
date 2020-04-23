//Questão 1011 - Esfera - URI Online Judge
#include <stdio.h>
#include <math.h>

int main(){
    
    double r;
    double vol;
    
    scanf("%lf", &r);
    vol = ((4.0/3)*3.14159*(pow(r,3)));
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}
