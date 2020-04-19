#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n, a, d, g;
    bool flag;
    scanf("%d", &n);
    while(n > 0){
        scanf("%d %d %d", &a , &d, &g);

        flag = false;
        if(a >= 200 && a <= 300){
            if(d >= 50){
                if(g >= 150)
                    flag = true;
            }
        }

        if(flag == true)
            printf("Sim\n");
        else
            printf("Nao\n");
        
        n--;
    }

    return 0;
}