//Problema 1142 - PUM - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, i, cont, k;
    
    cin >> n;

    cont = 1;
    for(i = 0; i < n; i++){
        for(k = 0; k < 3; k++){
            cout << cont << ' ';
            cont++;
        }
        cont++;
        cout << "PUM\n";
    }

    return 0;
}