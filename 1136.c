//Questão 1136 - Bingo! - URI Online Judge
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int n, b, i, j, k;
    bool flag;

    while(true){
        scanf("%d %d", &n, &b);

        if(!n && !b)
            break;

        int bolas[b];

        for(i = 0; i < b; i++)
            scanf("%d", &bolas[i]);

        for(k = 0; k <= n; k++){
            flag = false;
            for(i = 0; i < b; i++){
                //Flag indicará se o número foi anunciado ou não
                for(j = 0; j < b; j++){
                    if(abs(bolas[i] - bolas[j]) == k){
                        flag = true;
                        break;
                    }
                }
                if(flag)
                    break;
            }
            if(!flag)
                break;
        }

        if(flag)
            printf("Y\n");
        else
            printf("N\n");   
    }
    return 0;
}