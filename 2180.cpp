//Problema 2180 - Viagem à Marte na Velocidade de Primo | URI Online Judge
#include <bits/stdc++.h>

using namespace std;

bool verificaPrimo(int n){
    int i;

    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;

    return true;
}


int main(){
    int i, peso, dias, horas, somaPrimos = 0, nPrimos = 0;

    cin >> peso;    

    for(i = peso; nPrimos < 10; i++){
        if(verificaPrimo(i)){
            somaPrimos += i;
            nPrimos++;
        }
    }

    horas = 60000000 / somaPrimos;
    dias = horas / 24;

    printf("%d km/h\n%d h / %d d\n", somaPrimos, horas, dias);
}