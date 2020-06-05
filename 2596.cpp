//Questão 2597 - Xelonguinho - URI Online Judge
#include <iostream>

using namespace std;

//Retorna true, caso o numero de divisores seja par, e false caso contrário.
bool contaDivisores(int n){
    int div = 1, i;

    for(i = 2; i <= n; i++)
        if(n % i == 0)
            div++;

    if(div % 2 == 0)
        return true;
    
    return false;
}

int main(){
    int c, n, i, pares;
    cin >> c;

    while(c--){
        cin >> n;

        pares = 0;
        for(i = 2; i <= n; i++){
            if(contaDivisores(i))
                pares++;
        }

        cout << n - (n - pares) << "\n";
    }

    return 0;
}