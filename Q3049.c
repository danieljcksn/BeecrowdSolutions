#include <stdio.h>

int main(void){
    int b, t, areaTotal;
    double pedacoFelix, pedacoMarzia, metade;
    scanf("%d %d", &b, &t);

    //A metade da área da nota original vale a área total / 2:
    areaTotal = 70 * 160;
    metade = areaTotal / 2;

    //Sabemos que os cortes formarão dois trapézios. Basta calcular a área destes e verificar as condições.
    //70 é a altura, em cm, da nota.
    pedacoFelix = ((b + t) * 70) / 2;

    pedacoMarzia = areaTotal - pedacoFelix;

    //Caso os dois pedaços sejam iguais a metade da área original, a nota torna-se inválida.
    if(pedacoFelix == metade){
        printf("0\n");
        return 0;
    }

    //Verifica quem ficou com o pedaço valendo R$ 100,00
    if(pedacoFelix > pedacoMarzia)
        printf("1\n");
    else
        printf("2\n");
    

    return 0;
}