//Questão 1089 - Loop Musical - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, i, picos;

    while(true){
        cin >> n;
        if(n == 0)
            break;
        
        picos = 0;
        int amostras[n];
        for(i = 0; i < n; i++)
            cin >> amostras[i];

        for(i = 1; i < n-1; i++){
            if(amostras[i] < amostras[i-1] && amostras[i] < amostras[i+1])
                picos++;
            else if(amostras[i] > amostras[i-1] && amostras[i] > amostras[i+1])
                picos++;
        }

        //Verifica se há picos no inicio e no fim do loop.
        if(amostras[n-1] > amostras[n-2] && amostras[n-1] > amostras[0])
            picos++;
        else if(amostras[n-1] < amostras[n-2] && amostras[n-1] < amostras[0])
            picos++;
        
        if(amostras[0] > amostras[1] && amostras[0] > amostras[n-1])
            picos++;
        else if(amostras[0] < amostras[1] && amostras[0] < amostras[n-1])
            picos++;

        cout << picos << endl;
    }


    return 0;
}
