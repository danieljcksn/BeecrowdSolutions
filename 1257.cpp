//Problema 1257 - Array Hash - URI Online Judge
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n, l, hash, i, elemento;

    cin >> n;

    while(n--){
        cin >> l;
        hash = 0;
        
        string palavra;
        elemento = 0;
        while(l--){
            cin >> palavra;

            for(i = 0; i < palavra.length(); i++)
                hash += int(palavra[i]) - 65 + elemento + i;
            
            elemento++;
        }

        cout << hash << endl;
    }

    return 0;
}