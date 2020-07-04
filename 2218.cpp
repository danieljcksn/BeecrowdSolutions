//Problema 2218 - O Temível Evil-Son - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int t, i, n, gap, regioes;

    cin >> t;


    /* Sequência: 2 - 4 - 7 - 11 - 16 - 22 - 29 - 37. */
    while(t--){
        cin >> n;
        gap = 2;
        regioes = 2;
        for(i = 1; i < n; i++){
            regioes += gap;
            gap++;
        }

        cout << regioes << '\n';
    }

    return 0;
}