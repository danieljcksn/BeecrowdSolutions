//Problema 2702 - Escolha Difícil - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int vet1[3], vet2[3], dif = 0, i;

    for(i = 0; i < 3; i++)
        cin >> vet1[i];
    for(i = 0; i < 3; i++)
        cin >> vet2[i];
    for(i = 0; i < 3; i++){
        if(vet2[i] > vet1[i])
            dif += vet2[i] - vet1[i];
    }

    cout << dif << endl;

    



    return 0;
}