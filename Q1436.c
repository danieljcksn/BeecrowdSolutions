#include <stdio.h>

int main(void){
    int T, N, i, j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++){
        scanf("%d", &N);
        int idades[N];
        for(j = 0; j < N; j++)
            scanf("%d", &idades[j]);
        
        printf("Case %d: %d\n", i, idades[N/2]);
    }

    return 0;
}