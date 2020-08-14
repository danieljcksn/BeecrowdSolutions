//Problema 2661 - Despojados - URI Online Judge
//Baseado em https://www.youtube.com/watch?v=UDq1llRlqRQ

#include <bits/stdc++.h>

using namespace std;
bool verificaDespojado(long long n){
    
    if(n == 1)  
        return false;

    bool primo = true;
    long long i;
    for(i = 2; i <= sqrt(n); i++){
        if(n % (i*i) == 0)
            return false;
        if(n % i == 0)
            primo = false;
    }

    //Se não for primo, e não for divisor de nenhum quadrado perfeito, é despojado.
    return !primo;
}


int main(){
    long long n, i;
    cin >> n;
    
    int despojados = 0;

    for(i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            despojados += verificaDespojado(i);

            //Para cada divisor i que for encontrado, existe outro divisor
            //Maior que raiz de n, o qual é o n/i
            //Por exemplo: 3 divide 9. Raiz de 9 é 3, então não pode contar o mesmo numero duas vezes.
            if(i != n/i) 
                despojados += verificaDespojado(n/i);
        }
    }

    cout << despojados << endl;
}