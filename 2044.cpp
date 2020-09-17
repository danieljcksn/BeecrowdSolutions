// Problema 2044 - Em Dívida | URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, acumulado, visitas, p;

    while(true){
        cin >> n;

        if(n == -1)
            break;

        acumulado = 0;
        visitas = 0;

        for(int i = 0; i < n; i++){
            cin >> p;
            acumulado += p;

            if(acumulado % 100 == 0){
                visitas++;
                acumulado = 0;
            }
        }

        cout << visitas << "\n";
    }
}
