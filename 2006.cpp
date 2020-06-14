//Problema 2006 - Identificando o Chá - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int t, vet[5] , acertos = 0;

    cin >> t;
    for(int i = 0; i < 5; i++){
        cin >> vet[i];
        if(vet[i] == t)
            acertos++;
    }

    cout << acertos << endl;
    
    return 0;
}