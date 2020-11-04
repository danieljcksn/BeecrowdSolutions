#include <stdlib.h>
#include <stdio.h>

int compara(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int i;
    int entrada1,entrada2,entrada3;
    int vet[3];
    scanf("%d %d %d",&entrada1,&entrada2,&entrada3);
    vet[0] = entrada1;
    vet[1] = entrada2;
    vet[2] = entrada3;
    qsort(vet,3,sizeof(int),compara);
    for(i=0;i<3;i++){
        printf("%d\n",vet[i]);
    }
    printf("\n");
    printf("%d\n",entrada1);
    printf("%d\n",entrada2);
    printf("%d\n",entrada3);
    return 0;
}