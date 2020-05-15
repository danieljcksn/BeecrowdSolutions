//Questão 2981 - Vamos Fechar - URI Online Judge
#include <stdio.h>

int main(){
    int c, g;
    scanf("%d %d", &c, &g);

    if ((int)(c / g) < 10)
        printf("A UFSC fecha dia %d de setembro.\n", (c / g) + 21);
    else
        printf("A UFSC fecha dia %d de outubro.\n", (c / g) - 9);

    return 0;

}