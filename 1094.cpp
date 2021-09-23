#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    int totCoelhos, totRatos, totSapos, cobaias;
    
    totCoelhos = totRatos = totSapos = cobaias = 0;

    while(n--){
        int amount;
        char animal;
        int coelhos, ratos, sapos, qt;
        coelhos = ratos = sapos = 0;

        cin >> amount >> animal;
        if(animal == 'C')
            coelhos += amount;
        else if(animal == 'R')
            ratos += amount;
        else
            sapos += amount;

        cobaias += coelhos + ratos + sapos;

        totCoelhos += coelhos;
        totRatos += ratos;
        totSapos += sapos;
    }

    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", totCoelhos);
    printf("Total de ratos: %d\n", totRatos);
    printf("Total de sapos: %d\n", totSapos);
    printf("Percentual de coelhos: %.2lf ", (double)((double)totCoelhos/(double)cobaias * 100.00));
    cout << "%" << "\n";    
    printf("Percentual de ratos: %.2lf ", (double)((double)totRatos/(double)cobaias * 100.00));
    cout << "%" << "\n";    
    printf("Percentual de sapos: %.2lf ", (double)((double)totSapos/(double)cobaias * 100.00));
    cout << "%" << "\n";    

    
    return 0;
}
