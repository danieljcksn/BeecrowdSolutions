//Questão 2388 - Tacógrafo - URI Online Judge
#include <stdio.h>

int main(void){
	int n, i, T, V, total= 0;

	scanf("%d", &n);
	while(n>0){
		scanf("%d %d", &T, &V);
		total = total + T * V;
		n--;
	}

	printf("%d\n", total);
	return 0;
}
