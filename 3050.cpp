//Questão 3050 - Distância entre amigos - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int N, i, j, maior = 0, distancia;

    cin >> N;
    int predios[N];
    
    for(i = 0; i < N; i++)
        cin >> predios[i];
    
    for(i = 0; i < N ; i++){
        for(j = i; j < N; j++){
            distancia = predios[i] + (j - i) + predios[j];
            if(distancia > maior)
                maior = distancia;
        }
    }

    cout << maior << endl;

    return 0;
}