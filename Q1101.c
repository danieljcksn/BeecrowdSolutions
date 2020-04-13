#include <stdio.h>

int main(void){
    int m, n, i, soma;

    while(1){
        scanf("%d %d", &m, &n);
        if(m <= 0 || n <= 0)
            break;
        
        soma = 0;
        if(m < n){
            for(i = m; i <= n; i++){
                soma += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }else{
            for(i = n; i <= m; i++){
                soma += i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", soma);
        }
    }
    return 0;
}