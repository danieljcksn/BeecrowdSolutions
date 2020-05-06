////Questão 3004 - Envelopes - URI Online Judge
#include <stdio.h>

int main(){
    int n, a, b, c, d, aux;

    scanf("%d", &n);
    while(n > 0){
        scanf("%d %d %d %d", &a, &b, &c, &d);

        //Garantindo que os maiores valores estejam em 'a' e 'c', respectivamente
        if(a < b){
            aux = a;
            a = b;
            b = aux;
        }
        if(c < d){
            aux = c;
            c = d;
            d = aux;
        }

        if(a < c && b < d)
           printf("S\n");
        else
           printf("N\n");
        n--;
    }

    return 0;
}
