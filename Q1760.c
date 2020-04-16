#include <stdio.h>
#include <math.h>

int main(void){
    double l, areaTotal;
    
    while(scanf("%lf", &l) != EOF){
        areaTotal = 2 * sqrt(3) * pow(l, 2) / 5;
        printf("%.2lf\n", areaTotal);
    }


    return 0;
}