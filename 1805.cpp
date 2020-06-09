//Problema 1805 - Soma Natural - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    unsigned long long int soma1, soma2, total;
    long long int a, b;

    cin >> a >> b;

    //Soma dos n primeiros numeros naturais = n(n+1) / 2.
    soma1 = a * (a + 1) / 2;
    soma2 = b * (b + 1) / 2;

    total = soma2 - soma1 + a;

    cout << total << endl;
    return 0;
}