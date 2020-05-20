//Questão 1895 - Jogo do Limite - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, t, l, alice = 0, bob = 0, i;
    cin >> n >> t >> l;
     
    int cartas[n-1];
    for(i = 0; i < n-1; i++)
        cin >> cartas[i];

    for(i = 0; i < n-1; i++){
        //Vez da Alice.
        //Verifica se a diferença é menor ou igual ao limite.
        if(abs(t-cartas[i]) <= l){
            alice += abs(t - cartas[i]);
            //Substitui a carta na mesa.
            t = cartas[i];
        }
        i++;
        if(i < n-1){
            if(abs(t-cartas[i]) <= l){
                bob += abs(t - cartas[i]);
                //Substitui a carta na mesa.
                t = cartas[i];
            }            
        }
    }


    cout << alice << " " << bob << endl;
    return 0;
}