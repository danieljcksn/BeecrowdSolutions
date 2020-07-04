//Problema 3059 - Pares de Números - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, i, f, k, w;

    cin >> n >> i >> f;

    int vet[n];
    for(k = 0; k < n; k++)
        cin >> vet[k];


    int pares = 0, soma;
    for(k = 0; k < n; k++){
        for(w = k + 1; w < n; w++){
            soma = vet[k] + vet[w];
            if(soma >= i && soma <= f)
                pares++;
        }
    }

    cout << pares << '\n';


    return 0;
}