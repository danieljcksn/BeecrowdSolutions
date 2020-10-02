#include <stdio.h>
#include <stdlib.h>

int *contaCedulas(float valor,int *vet){
    while(valor>0.0){
        if(valor>=100){
            valor -= 100;
            vet[0]++;
        }else if(valor>=50){
            valor -= 50;
            vet[1]++;
        }else if(valor>=20){
            valor -= 20;
            vet[2]++;
        }else if(valor>=10){
            valor -= 10;
            vet[3]++;
        }else if(valor>=5){
            valor -= 5;
            vet[4]++;
        }else if(valor>=2){
            valor -= 2;
            vet[5]++;
        }else if(valor>=1){
            valor -= 1;
            vet[6]++;
        }else if(valor>=0.5){
            valor -= 0.5;
            vet[7]++;
        }else if(valor>=0.25){
            valor -= 0.25;
            vet[8]++;
        }else if(valor>=0.1){
            valor -= 0.1;
            vet[9]++;
        }else if(valor>=0.05){
            valor -= 0.05;
            vet[10]++;
        }else if(valor>=0.009){
            valor -= 0.01;
            vet[11]++;
        }else{
            valor = 0;
        }
    }
    return vet;
}

int main(){
    int i;
    int vet[12];
    float entrada = 0.0;
    for(i=0;i<12;i++){
        vet[i] = 0;
    }
    scanf("%f",&entrada);
    contaCedulas(entrada,vet);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",vet[0]);
    printf("%d nota(s) de R$ 50.00\n",vet[1]);
    printf("%d nota(s) de R$ 20.00\n",vet[2]);
    printf("%d nota(s) de R$ 10.00\n",vet[3]);
    printf("%d nota(s) de R$ 5.00\n",vet[4]);
    printf("%d nota(s) de R$ 2.00\n",vet[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",vet[6]);
    printf("%d moeda(s) de R$ 0.50\n",vet[7]);
    printf("%d moeda(s) de R$ 0.25\n",vet[8]);
    printf("%d moeda(s) de R$ 0.10\n",vet[9]);
    printf("%d moeda(s) de R$ 0.05\n",vet[10]);
    printf("%d moeda(s) de R$ 0.01\n",vet[11]);
    return 0;
}