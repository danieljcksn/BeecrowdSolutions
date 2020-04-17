#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool verificaPrimo(unsigned long int x){
    int i;
    int raiz = sqrt(x);
    bool flag = true;
    for(i = 2; i <= raiz; i++){
        if(x % i == 0){
            flag = false; 
            break;
        }
    }
    return flag;
}
int main(void){
    int n;
    unsigned long int x, i;

    scanf("%d", &n);
    
    while(n > 0){
        scanf("%lu", &x);

        if(verificaPrimo(x) == true)
            printf("Prime\n");
        else
            printf("Not Prime\n");

        n--;
    }


    return 0;
}