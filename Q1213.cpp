#include <iostream>

using namespace std;

int main(void){
    int x, digitos;
    int i, n;

    while(cin >> x){
        n = 1;
        digitos = 1;
        while(n % x != 0){
            n = (10 * n + 1) % x;
            digitos++;
        }
        cout << digitos << endl;
    }

    return 0;
}