#include <stdlib.h>
#include <stdio.h>

int main(){
    float c1,c2;
    scanf("%f %f",&c1,&c2);
    if(c1 == 0 && c2 == 0)
        printf("Origem\n");
    else if(c1==0)
        printf("Eixo Y\n");
    else if(c2==0)
        printf("Eixo X\n");
    else if(c1>0 && c2>0)
        printf("Q1\n");
    else if(c1<0 && c2>0)
        printf("Q2\n");
    else if(c1<0 && c2<0)
        printf("Q3\n");
    else if(c1>0 && c2<0)
        printf("Q4\n");
    return 0;
}