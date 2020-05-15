//Questão 3078 - Só o Ouro - URI Online Judge
#include <stdio.h>
#include <math.h>
#include <stdbool.h> //Para utilizar o true

int main(){
    int n, b, c, y;
    float delta, x1, x2;

    while(true){
        scanf("%d", &n);
        if(n == -1)
            break;
        
        b = n % 257;
        c = n % 193;

        delta = pow(b, 2) - 4 * c;
        if(delta < 0)
            printf("So o ouro\n");
        else{
            //Calculando as raízes
            x1 = (-b + sqrt(delta)) / 2;
            x2 = (-b - sqrt(delta)) / 2;

            //Não há raízes reais
            if(x1 < 0 && x2 < 0)
                printf("So o ouro\n");
            //Há apenas uma raiz real
            else if((x1 < 0 && x2 == 0) || (x2 < 0 && x1 == 0) || (!x1 && !x2))
                printf("Bom\n");
            //Há duas ou mais  raízes
            else
                printf("Regular\n");           

        }   
    }

    return 0;
}