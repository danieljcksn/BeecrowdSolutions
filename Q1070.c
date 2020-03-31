#include <stdio.h>

int main(void){
    int n, i, cont = 0;

    scanf("%d", &n);

    if(n % 2 == 0){
        for(i = n+1; cont < 6; i+=2){
            printf("%d\n", i);
            cont++;
        }
    }
    else{
        for(i = n; cont < 6; i+=2){
            printf("%d\n", i);
            cont++;
        }
    }

    return 0;
}