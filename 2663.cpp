//Questão 2663 - Fase - URI Online Judge
#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int a, int b){
    return a > b;
}
int main(void){
    int n, k, i, classificados = 0;
    cin >> n >> k;

    int competidores[n];

    for(i = 0; i < n; i++)
        cin >> competidores[i];

    sort(competidores, competidores + n, compare);
    
    classificados += k;
    i = k;
    while(competidores[k-1] == competidores[i]){
        classificados++;
        i++;
    }

    cout << classificados << endl;
    return 0;
}
