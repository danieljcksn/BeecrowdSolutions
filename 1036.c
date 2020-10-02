#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,delta,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        printf("Impossivel calcular\n");
        return 0;
    }else{
        delta = (b*b)-(4*a*c);
        if(delta<0){
            printf("Impossivel calcular\n");
            return 0;
        }else{
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("R1 = %.5lf\n",x1);
            printf("R2 = %.5lf\n",x2);
            return 0;
        }

    }
    return 0;
}