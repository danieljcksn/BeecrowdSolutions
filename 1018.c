//Questão 1018 - Cédulas - URI Online Judge
#include <stdio.h>

int main(void){

	int N, n100, n50, n20, n10, n5, n2, n1;
	n100 = 0;
	n50 = 0;
	n20 = 0;
	n10 = 0;
	n5 = 0;
	n2 = 0;
	n1 = 0;
	scanf("%d", &N);
	printf("%d\n", N);
	if(N>0 && N<100000){
		while(N>=100){
			n100++;
			N = N - 100;
		}
		while(N>=50){
			n50++;
			N = N - 50;
		}
		while(N>=20){
			n20++;
			N = N - 20;
		}
		while(N>=10){
			n10++;
			N = N - 10;
		}
		while(N>=5){
			n5++;
			N = N - 5;
		}
		while(N>=2){
			n2++;
			N = N - 2;
		}
		while(N>=1){
			n1++;
			N = N - 1;
		}
	}

	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n5);	
	printf("%d nota(s) de R$ 2,00\n", n2);	
	printf("%d nota(s) de R$ 1,00\n", n1);	


	return 0;
}
