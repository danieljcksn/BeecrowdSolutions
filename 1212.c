//Problema 1212 - Aritmética Primária - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

void swap(int* a, int* b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int a, b, carry, digA, digB;
    bool flag;

    while(true){
        scanf("%d %d", &a, &b);

        if(!a && !b)
            break;

        carry = 0;
        flag = false;

        if(a < b)
            swap(&a, &b);

        while(a > 0 && b > 0){
            digA = a % 10;
            digB = b % 10;

            if((digA + digB + flag) >= 10){
                carry++;
                flag = true;
            }else
                flag = false;
            a /= 10;
            b /= 10;
        }


        //B com certeza chegou a zero, pois a > b.
        if(flag){
            while(a % 10 == 9){
                carry++;
                a /= 10;
            }
        }
        if(!carry)
            printf("No carry operation.\n");
        else if(carry == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", carry);
    }


    return 0;
}