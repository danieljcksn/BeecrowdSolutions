//Questão 1017 - Gasto de Combustível - URI Online Judge
#include <stdio.h>

 int main(void){

 	int tempo, vm, percorrido;
 	double litros;

 	scanf("%d %d", &tempo, &vm);

 	percorrido = (tempo * vm);
	litros = (percorrido / 12.0);

	printf("%.3lf\n", litros);

 	return 0;
 }
