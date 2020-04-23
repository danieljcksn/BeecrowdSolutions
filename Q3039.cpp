#include <iostream>

using namespace std;

int main(){
    int n, carrinhos = 0, bonecas = 0;
    string nome;
    char sexo;
    cin >> n;

    while(n > 0){
        cin >> nome >> sexo;
        if(sexo == 'F')
            bonecas++;
        else
            carrinhos++;
        n--;
    }

    cout << carrinhos << " carrinhos\n" << bonecas << " bonecas\n";

    return 0;
}