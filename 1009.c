//Questão 1009 - Salário com Bônus
#include <stdio.h>
#include <string.h>
int main()
{
    char nome[15];
    double sfixo;
    double totalv;
    double sfinal;
    scanf("%s %lf %lf", &nome, &sfixo, &totalv);
    sfinal = (sfixo + (0.15*totalv));
    printf("TOTAL = R$ %.2lf\n", sfinal);
    
    return 0;
}
