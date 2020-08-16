//Questão 2175 - Qual o Mais Rápido? - URI Online Judge
#include <bits/stdc++.h>

using namespace std;

int main(){
    double O, B, I;

    cin >> O >> B >> I;
    
    if(O < B && O < I)
        cout << "Otavio\n";
    else if(B < O && B < I)
        cout << "Bruno\n";
    else if(I < O && I < B)
        cout << "Ian\n";
    else
        cout << "Empate\n";
        
    return 0;   
}