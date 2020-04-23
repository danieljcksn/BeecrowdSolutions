//Questão 1051 - Imposto de Renda - URI Online Judge
#include <stdio.h>

int main(void){
    float renda, imposto = 0;

    scanf("%f", &renda);
    if(renda >= 0 && renda <= 2000)
        printf("Isento\n");
    else{
        if(renda <= 3000){
            renda -= 2000;
            imposto +=  0.08 * renda;
            printf("R$ %.2f\n", imposto);
        }   
        else{
            if(renda <= 4500){
                renda -= 2000;
                imposto += 0.08 * 1000;
                renda -= 1000;
                imposto += 0.18 * renda;
                printf("R$ %.2f\n", imposto);
            }else{
                renda = renda - 2000;
                imposto += 0.08 * 1000;
                renda -= 1000;
                imposto += 0.18 * 1500;
                renda -= 1500;
                imposto += 0.28 * renda;
                printf("R$ %.2f\n", imposto);
            }
        }
    }
    return 0;
}
