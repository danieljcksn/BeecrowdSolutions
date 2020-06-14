//Problema 1153 - Fatorial Simples - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, fatorial, i;

    cin >> n;

    fatorial = n;

    for(i = n-1; i >= 1; i--)
        fatorial *= i;

    cout << fatorial << '\n';
    
    return 0;
}