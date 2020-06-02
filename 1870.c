//Questão 1870 - Ventiladores e Balões - URI Online Judge
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int l, c, p, i, j;
    int vEsq, vDir, dif, pEsq, pDir;
    bool flag;
    while(true){
        scanf("%d %d %d", &l, &c, &p);

        //Caso todos sejam iguais a zero.
        if(!l && !c && !p)
            break;
        
        //Preenche toda a matriz.
        int matriz[l][c];
        for(i = 0; i < l; i++)
            for(j = 0; j < c; j++)
                scanf("%d", &matriz[i][j]);
        

        flag = false;
        for(i = 0; i < l; i++){
            //Encontra o ventilador mais próximo à esquerda do balão.
            for(j = p-2; j >= 0; j--){
                //Caso seja diferente de zero.
                if(matriz[i][j]){
                    //Armazena a potência do ventilador.
                    vEsq = matriz[i][j];
                    //Armazena a posição do ventilador.
                    pEsq = j;
                    break;
                }
            }
            
            //Encontra o ventilador mais próximo à direita do balão. 
            for(j = p; j <= c; j++){
                //Caso seja diferente de zero.
                if(matriz[i][j]){
                    //Armazena a potência do ventilador.
                    vDir = matriz[i][j];
                    //Armazena a posição do ventilador.
                    pDir = j;
                    break;
                }
            }

            //Calcula a diferênça de potência entre os dois ventiladores.
            dif = abs(vDir - vEsq);
            //Caso vDir == vEsq, não altera a posição do balão.
            if(vDir > vEsq){
                //O balão é jogado para a esquerda
                p -= dif;
            }else if(vDir < vEsq){
                //O balão é jogado para a esquerda
                p += dif;
            }
            

            //Caso o balão tenha chegado ou ultrapassado um dos ventiladores, será estourado.
            if(p-1 <= pEsq){
                printf("BOOM %d %d\n", i+1, pEsq+1);
                //Flag = true indicará que o balão estourou 
                flag = true;
                break;
            }
            else if(p-1 >= pDir){
                printf("BOOM %d %d\n", i+1, pDir+1);
                //Flag = true indicará que o balão estourou 
                flag = true;
                break;
            }
        }

        //Caso o balão não tenha sido estourado, exibe a saída dele.
        if(!flag)
            printf("OUT %d\n", p);
    }

    return 0;
}