//Questão 3060 - Parcelamento sem Juros - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int v, p, resto, i, parcela, contador;

    cin >> v >> p;
    parcela = v / p;
    resto = v % p;
    if(resto == 0){
        for(i = 0; i < v; i += parcela)
            cout << parcela << endl;
    }else{
        contador = 0;
        while(resto > 0){
            contador += parcela + 1;
            cout << parcela + 1 << endl;
            resto--;
        }
        for(i = contador; i < v; i += parcela)
            cout << parcela << endl;
    }


    return 0;
}