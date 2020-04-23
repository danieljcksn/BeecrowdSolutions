//Questão 1014 - Consumo - URI Online Judge
#include <stdio.h>

int main(void){
	int X;
	double Y, consumom;

	scanf("%d %lf", &X, &Y);
	consumom = (X/Y);
	printf("%.3lf km/l\n", consumom);

	return 0;
}
