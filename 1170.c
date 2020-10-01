#include <stdlib.h>
#include <stdio.h>

int main(){
    int quantidade;
    float entrada;
    if(scanf("%d",&quantidade)!=EOF){
        int i,dias;
        for(i=0;i<quantidade;i++){
            scanf("%f",&entrada);
            dias = 0;
            while(entrada>1){
                dias++;
                entrada/=2;
            }
            printf("%d dias\n",dias);
        }
    }

    return 0;
}