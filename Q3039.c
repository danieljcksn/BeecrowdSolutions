#include <stdio.h>

int main(){
    int n, carrinhos = 0, bonecas = 0;
    char sexo, nome[30];

    scanf("%d", &n);
    
    while(n > 0){
        scanf("%s %c", nome, &sexo);
        if(sexo == 'F')
            bonecas++;
        else
            carrinhos++;
        n--;
    }

    printf("%d carrinhos\n%d bonecas\n", carrinhos, bonecas);
    return 0;
}