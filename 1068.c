//Questão 1068 - Balanço de Parênteses I - URI Online Judge
#include <stdio.h>
#include <string.h>
int main(void){
    char expressao[1001];
    int verificador, i, j;

    
    while(fgets(expressao, 1000, stdin) != NULL){
        verificador = 0;
        for(j = 0; j < strlen(expressao); j++){
            if(expressao[j] == '(')
                verificador++;
            else{
                if(expressao[j] == ')'){
                    verificador--;
                    if(verificador < 0)
                        break;
                }
            }
        }
        if(verificador == 0)
            printf("correct\n");
        else
            printf("incorrect\n");
        expressao[0] = '\0';
    }   

    return 0;
}
