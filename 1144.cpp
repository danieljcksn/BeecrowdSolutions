//Problema 1144 - Sequência Lógica - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, k, l, i;

    cin >> n;

    k = 1;
    l = 1;
    for(i = 1; i <= n; i++){
        k = i * i;
        l = k * i;

        cout << i << ' ' << k << ' ' << l << '\n';
        cout << i << ' ' << k+1 << ' ' << l+1 << '\n';
    }


    return 0;
}