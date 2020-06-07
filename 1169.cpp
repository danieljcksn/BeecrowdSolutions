//Problema 1169 - Trigo no Tabuleiro - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, x, i;
    unsigned long long int total;

    cin >> n;

    while(n--){
        cin >> x;

        if(x == 64)
            cout << "1537228672809129 kg\n";
        else{
            total = 0;

            for(i = 0; i < x; i++)
                total += pow(2, i);
            
            //Convertendo pra gramas.
            total = total / 12;
            //Convertendo para quilos.
            total = total / 1000;
            cout << total << " kg\n";
        }
    }

    return 0;
}