//Questão 1310 - Lucro - URI Online Judge
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, custoPorDia, receita, i;
    int max_so_far, max_ending_here;
    
    while(cin >> n){
        //n = Número de dias que George pode trazer o seu circo para a cidade
        //Custo para manter o circo
        cin >> custoPorDia;

        int lucroNoDia[n];
        for(i = 0; i < n; i++){
            cin >> receita;
            //O lucro obtido no dia i é igual ao valor arrecadado - custo
            lucroNoDia[i] = receita - custoPorDia;
        }
    
        //Determina a maior subsequência dos n dias possíveis
        //Através do Algoritmo de Kadane https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
        max_so_far = 0;
        max_ending_here = 0;
        for(i = 0; i < n; i++){
            max_ending_here += lucroNoDia[i];
            if(max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if(max_ending_here < 0)
                max_ending_here = 0;
        }

        cout << max_so_far << '\n';    
    }

    return 0;
}