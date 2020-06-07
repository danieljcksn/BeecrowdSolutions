//Problema 1259 - Pares e Ímpares - URI Online Judge
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, i, num;
    vector<int> Pares;
    vector<int> Impares;
    vector<int> Result;
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> num;
        if(num % 2 == 0)
            Pares.push_back(num);
        else
            Impares.push_back(num);
    }

    sort(Pares.begin(), Pares.end());
    sort(Impares.begin(), Impares.end(), greater<int>());

    for(i = 0; i < Pares.size(); i++)
        Result.push_back(Pares[i]);
    for(i = 0; i < Impares.size(); i++)
        Result.push_back(Impares[i]); 

    for(i = 0; i < Result.size(); i++)
        cout << Result[i] << "\n";
    return 0;
}