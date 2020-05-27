//Questão 1869 - Base 32 - URI Online Judge
#include <iostream>
#include <vector>

using namespace std;

int main(){
    unsigned long long int n, i;
    char tabela[33] = "0123456789ABCDEFGHIJKLMNOPQRSTUV";
    int resto, indice;

    while(true){
        cin >> n;
        
        if(!n){
            cout << '0' << endl;
            break;
        }

        vector<unsigned long long int> num;
        while(n != 0){
            resto = n % 32;
            n = n / 32;
            num.push_back(resto);
        }

        for(i = num.size() - 1; i >= 0; i--){
            indice = num[i];
            cout << tabela[indice];
        }
        cout << endl;
    }

    return 0;
}