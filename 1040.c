#include <stdlib.h>
#include <stdio.h>

int main(){
    float n1,n2,n3,n4;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    n1 = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf("Media: %.1f\n",n1);
    if(n1>=7.0)
        printf("Aluno aprovado.\n");
    else if(n1<5.0)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&n2);
        n1 = (n1+n2)/2;
        printf("Nota do exame: %.1f\n",n2);
        if(n1>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",n1);
    }
    return 0;
}