//Questão 1025 - Onde Está o Mármore? - URI Online Judge
#include <stdio.h>
#include <stdbool.h>

void quick_sort(int *a, int left, int right){
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j){
        while(a[i] < x && i < right)
            i++;
        while(a[j] > x && j > left)
            j--;
        if(i <= j){
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) 
        quick_sort(a, left, j);
    if(i < right)
        quick_sort(a, i, right);
}

int main(){
    int n, q, cases = 1, i, consulta, flag;

    while(true){
        scanf("%d %d", &n, &q);
        if(n == 0 && q == 0)
            break;
        printf("CASE# %d:\n", cases);
        cases++;
        //Flag indicará se o número foi encontrado ou não no vetor

        //Preenchendo o vetor de mármores
        int marmores[n];
        for(i = 0; i < n; i++)
            scanf("%d", &marmores[i]);
        
        //Ordenando os mármores
        quick_sort(marmores, 0, n-1);
        while(q > 0){
            scanf("%d", &consulta);
            flag = false;
            //Busca o primeiro mármore igual ao valor da consulta Q, com uma busca sequencial
            for(i = 0; i < n; i++){
                if(marmores[i] == consulta){
                    flag = true;
                    break;
                }
            }

            //Verificação final para exibição dos resultados
            if(flag == true)
                printf("%d found at %d\n", consulta, i+1);
            else
                printf("%d not found\n", consulta);
            q--;
        }
    }
}