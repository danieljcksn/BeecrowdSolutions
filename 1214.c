//Questão 1214 - Acima da Média - URI Online Judge
#include <stdio.h>

int main(){
    int c, n, i, total, acima;
    float media, media1;

    scanf("%d", &c);
    while(c > 0){
        scanf("%d", &n);

        //O número de alunos acima da média e o total das médias são zerados
        acima = 0;
        total = 0;

        int alunos[n];

        for(i = 0; i < n; i++){
            scanf("%d", &alunos[i]);
            total += alunos[i];
        }
        
        //Calculando a media dos alunos
        media = (float)total / n;

        for(i = 0; i < n; i++){
            if(alunos[i] > media)
                acima++;
        }

        //Calculando a média dos alunos acima da média kkk
        media1 = (float)acima / n * 100;
        printf("%.3f%\n", media1);

        c--;
    }


    return 0;
}