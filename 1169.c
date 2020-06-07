//Problema 1169 - Trigo no Tabuleiro - URI Online Judge
#include <stdio.h>
#include <math.h>

int main(){
    int n, x, i;
    unsigned long long int total;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);

        if(x == 64)
            printf("1537228672809129 kg\n");
        else{
            total = 0;

            for(i = 0; i < x; i++)
                total += pow(2, i);
            
            //Convertendo pra gramas.
            total = total / 12;
            //Convertendo para quilos.
            total = total / 1000;
            printf("%llu kg\n", total);
        }
    }

    return 0;
}