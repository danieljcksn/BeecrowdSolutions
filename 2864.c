//Problema 2864 - Qual é a Altura? - URI Online Judge
#include <stdio.h>
#include <math.h>

int main(){
    int t, a, b, c, delta;
    double yMax;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d", &a, &b, &c);

        delta = pow(b, 2) - 4 * a * c;
        yMax = -((double)delta / (double)(4 * a));

        printf("%.2lf\n", yMax);
    }

    return 0;
}