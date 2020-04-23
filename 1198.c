//Questão 1198 - O Bravo Guerreiro Hashmat
#include <stdio.h>
#include <stdlib.h>

int main(){
    //A variável unsigned long int tem valores de 0 a 4,294,967,295 (2^32 - 1). Porém, o enunciado informa que o número não
        //será maior que 2^32. Ou seja, o máximo será 4,294,967,296,, logo, unsigned long int não é suficiente.
	long long int a, b, diferenca;

	while(scanf("%lld %lld", &a, &b) != EOF){
        if(a >= b)
			diferenca = a - b;
		else
			diferenca = b - a;

		printf("%lld\n", diferenca);
	}
	return 0;
}