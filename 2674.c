//Questão 2674 - Super Primos: Ativar! - URI Online Judge
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Função que verificará se o número é primo
bool verificaPrimo(int x){
    int i;
    //Números primos começam a partir de 2.
    if(x == 1 || x == 0)
        return false;

    for(i = 2; i <= sqrt(x); i++)
        if(x % i == 0)
            return false;

    //Caso não encontre nenhum divisor, é primo.
    return true;
}

int main(){
    int num, digito;
    bool flag;

    while(scanf("%d", &num) != EOF){
        //Se for primo, verifica se é super ou um primo normal.
        if(verificaPrimo(num)){
            //Se a flag permanecer verdadeira até o final, o número possui todos dígitos que o compoem primos.
            flag = true;
            while(num > 0){
                //Verifica a primalidade de cada dígito de num.
                digito = num % 10;
                if(!verificaPrimo(digito)){
                    flag = false;
                    break;
                }
                num /= 10;
            }
            if(flag)
                printf("Super\n");
            else
                printf("Primo\n");
            
        }else
            printf("Nada\n");
    }

    return 0;
}