//Questão 1025 - Onde Está o Mármore? - URI Online Judge
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, q, cases = 1, i, consulta, flag;

    while(true){
        cin >> n >> q;
        if(n == 0 && q == 0)
            break;
        cout << "CASE# "<< cases << ":" << endl;
        cases++;
        //Flag indicará se o número foi encontrado ou não no vetor

        //Preenchendo o vetor de mármores
        int marmores[n];
        for(i = 0; i < n; i++)
            cin >> marmores[i];
        
        //Ordenando os mármores
        sort(marmores, marmores + n);
        while(q > 0){
            cin >> consulta;
            flag = false;
            //Busca o primeiro mármore igual ao valor da consulta Q, com uma busca sequencial
            for(i = 0; i < n; i++){
                if(marmores[i] == consulta){
                    flag = true;
                    break;
                }
            }

            //Verificação final para exibição dos resultados
            if(flag == true)
                cout << consulta << " found at " << i+1 << endl;
            else
                cout << consulta << " not found" << endl;
            q--;
        }
    }
}