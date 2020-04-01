#include <stdio.h>

int main(void){
    int x, cont = 1;
    long int y, i;
    scanf("%d %li", &x, &y);

    for(i = 1; i <= y; i++){
        if(cont <= x-1){
            printf("%li ", i);
            cont++;
        }else{
            printf("%li\n", i);
            cont = 1;
        }
    } 
    return 0;
}