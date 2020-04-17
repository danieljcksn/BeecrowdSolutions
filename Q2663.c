#include <stdio.h>
#include <stdbool.h>

bool compare(int a, int b){
    return a > b;
}

void ordenaDecrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i; j < tamanho - 1; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main(void){
    int n, k, i, classificados = 0;
    scanf("%d %d", &n, &k);

    int competidores[n];

    for(i = 0; i < n; i++)
        scanf("%d", &competidores[i]);

    ordenaDecrescente(competidores, n);
    
    classificados += k;
    i = k;
    while(competidores[k-1] == competidores[i]){
        classificados++;
        i++
    }

    printf("%d\n", classificados);    
    return 0;
}