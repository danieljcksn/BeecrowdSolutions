#include <stdio.h>

int main(){
    double b, h, area;
    scanf("%lf %lf", &b, &h);

    area = (b * h) / 2;
    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n", area);
    return 0;
}