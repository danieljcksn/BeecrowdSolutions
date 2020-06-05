//Questão 1921 - Guilherme e Suas Pipas - URI Online Judge
//Ver http://www.inf.ufpr.br/andre/Disciplinas/BSc/CI065/michel/Intro/intro.html#:~:text=Grafo%20completo,(n%2D1)%2F2.

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    long long int result;

    scanf("%d", &n);


    //O número de arestas em um grafo completo é n(n-1)/2, sendo n o número de vértices.
    //Retira n, pois será o número total de arestas menos as arestas que já compõem os lados da pipa (n, no total).
    result = (pow(n, 2) - 3 * n) / 2;

    printf("%lli\n", result);

    /*
    O resultado deve ser armazenado em uma variável que permita armazenar
    10^5 * (10^5 - 1) / 2 = 4.999.950.000 - 100.000

    int: -2147483648 to 2.147.483.647
    unsigned int: 0 to 4.294.967.295
    long int: -2.147.483.648 to 2.147.483.647
    unsigned long int: 0 to 4.294.967.295
    long long int:  -9.223.372.036.854.775.808 to 9.223.372.036.854.775.807 (Capaz de armazenar o resultado).
    unsigned long long int: 0 to 18.446.744.073.709.551.615



    O número de arestas em um grafo completo é n(n-1)/2, sendo n o número de vértices.
    */

    return 0;
}