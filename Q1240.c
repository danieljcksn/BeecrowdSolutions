#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int contaDigitos(unsigned long long int x){
    int i = 0;

    //Exemplo: 5789 -> 578 -> 57 -> 5 -> 0 ** i = 4
    while(x > 0){
        i++;
        x =  x / 10;
    }

    return i;
}

int main(void){
    unsigned int N, digitosA, digitosB, potencia, i;
    unsigned long long int a, b, aux, diferenca = 0;
    bool flag;
    //5678690 78690
    scanf("%u", &N);
    while(N > 0){
        diferenca = 0;
        scanf("%llu %llu", &a, &b);
        //Caso b seja maior que a, não pode estar contido em a
        if(b > a)
            flag = false;
        else{
            digitosA = contaDigitos(a);
            digitosB = contaDigitos(b);
            //Caso o número de dígitos de A seja igual ao número de dígitos de B
            if(digitosA == digitosB){
                //Se forem iguais, encaixa.
                if(a == b)
                    flag = true;
                //Senão, não.
                else   
                    flag = false;
            }
            //Se o número de dígitos de a for maior que o número de dígitos de b
            else{
                aux = a;

                //a variável que armazenará a potência começa a contar a partir da quantidade de dígitos de b
                potencia = digitosB - 1;

                //remove a quantidade de dígitos do número b, por exemplo,
                //se a = 5678690 e b = 78690, aux se tornará 56
                for(i = 0; i < digitosB; i++)
                    aux = aux / 10;

                //enquanto a diferença de digitos entre A e B for maior que zero
                for(i = 0; i < digitosA - digitosB; i++){
                    //a variável diferença receberá o resultado de aux % 10 elevado à potencia determinada,
                    //seguindo o exemplo anterior, diferença vai receber 6 * 10^6
                    //e depois receberá 5 * 10 ^ 7
                    potencia++;
                    diferenca += (aux % 10) * (pow(10, potencia));
                    aux = aux / 10;
                }
                //no final, a variável diferença terá o número 5600000.
                //Agora, se subtrairmos o valor inicial de A (5678690 pelo valor de diferença, teremos: 5678690 - 5600000 = 78690)
                //basta verificar, então, se o resultado da subtração é igual ou não ao valor de b.

                if(a - diferenca == b)
                    flag = true;
                else
                    flag = false;
            }
                
        }

        if(flag == true)
            printf("encaixa\n");
        else  
            printf("nao encaixa\n");
        N--;
    }



}