//Questão 1080 - Maior e Posição - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int numeros[100], i, maior;

    for(i = 0; i < 100; i++)
        cin >> numeros[i];

    maior = 0;
    for(i = 1; i < 100; i++){
        if(numeros[maior] < numeros[i])
            maior = i;
    }

    cout << numeros[maior] << endl << maior+1 << endl;
    return 0;
}
