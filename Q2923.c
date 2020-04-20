#include <stdio.h>

int main(void){
    int t, a, w, c;
    double percent;

    while(scanf("%d", &t) != EOF && scanf("%d", &a) != EOF && scanf("%d", &w) != EOF && scanf("%d", &c) != EOF){
        percent = (double)a / (double)t * 100.0;
        if(percent >= c)
            printf("critical\n");
        else if(percent >= w)
            printf("warning\n");
        else
            printf("OK\n");
    }
    return 0;
}