//Questão 2534 - Exame Geral - URI Online Judge
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, q, i, posicao;
    
    while(cin >> n >> q){
        int notas[n];

        for(i = 0; i < n; i++)
            cin >> notas[i];
        
        //Ordena em ordem decrescente.
        sort(notas, notas + n, greater<int>());
        while(q--){
            cin >> posicao;
            cout << notas[posicao-1] << endl;
        }
    }
    return 0;
}