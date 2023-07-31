//Questão 3048 - Sequência Secreta - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int N, i, j, atual, consecutivos = 0;

    cin >> N;
    int sequencia[N];
    
    for(i = 0; i < N; i++) {
        cin >> sequencia[i];
    }   

    for (i = 0; i < N; i++) {
        if (sequencia[i] != atual) {
            consecutivos++;
        }
        atual = sequencia[i];
    }  
    cout << consecutivos << endl;

    return 0;
}