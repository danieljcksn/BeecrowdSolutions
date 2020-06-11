//Problema 2135 - Recuperação - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, i, instancia = 1, soma;
    bool flag;

    while(cin >> n){
        int vet[n];

        for(i = 0; i < n; i++)
            cin >> vet[i];
        soma = vet[0];
        
        flag = false;
        for(i = 1; i < n; i++){
            if(soma == vet[i]){
                flag = true;
                break;
            }
            soma += vet[i];
        }

        if(vet[0] == 0)
            cout << "Instancia " << instancia << '\n' << 0 << '\n';
        else{
            if(flag)
                cout << "Instancia " << instancia << '\n' << vet[i] << '\n';
            else 
                cout << "Instancia " << instancia << "\nnao achei\n";
        }
        
        cout << '\n';
        instancia++;
    }

    return 0;
}