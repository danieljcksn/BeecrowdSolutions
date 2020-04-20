#include <stdio.h>

void swap(int* copos, pos1, pos2){
    int aux;
    
    aux = copos[pos1];
    copos[pos1] = copos[pos2];
    copos[pos2] = aux;
}

int main(){
    int n, mov, copos[3] = {0, 0, 0};
    char inicio;
    
    scanf("%d %c", &n, &inicio);

    //O 1 indicará onde a moeda encontra-se. Se o inicio escolhido for A, subtrai A por 65 do código ASCII de 'A'. 
    //E teremos então o número 0, índice do primeiro elemento do vetor.

    copos[inicio - 65] = 1;

    while(n > 0){
        scanf("%d", &mov);
        switch(mov){
            case 1:
                //Caso um destes copos tenha a moeda. Troca a moeda de um copo para outro. Senão, nada mudará. 
                //O comportamento é o mesmo para todos os movimentos. Swap troca o que está em copos[0] pelo que está em copos[1] e vice-versa.
                if(copos[0] || copos[1] == 1)
                    swap(copos, 0, 1);
                break;
            case 2:
                if(copos[1] || copos[2] == 1)
                    swap(copos, 1, 2);
                break;
            case 3:
                if(copos[0] || copos[2] == 1)
                    swap(copos, 0, 2);
                break;
        }

        n--;
    }

    if(copos[0] == 1)
        printf("A\n");
    else
        if(copos[1] == 1)
            printf("B\n");
        else
            printf("C\n");
            
    return 0;
}