//Questão 1028 - Figurinhas - URI Online Judge
#include <stdio.h>

int calculaMdc(int f1, int f2){
	if(f1%f2 == 0)
		return f2;
	else
		return calculaMdc(f2, f1 % f2);
}

int main(void){
	int n, f1, f2, mdc;

	scanf("%d", &n);

	while(n>0){
		scanf("%d %d", &f1, &f2);
		mdc = calculaMdc(f1, f2);
		printf("%d\n", mdc);
		n--;
	}
	return 0;
}
