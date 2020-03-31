#include <stdio.h>

int main(void){
    int n, i;

    scanf("%d", &n);
    for(i = 1; i <= n; i += 2)
        printf("%d\n", i);

    return 0;
}