#include <stdio.h>
 
int main() {

    int number, hours;
    double porhora;
    double salario;
    
    scanf("%d %d %lf", &number, &hours, &porhora);
    salario = (porhora*hours);
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}