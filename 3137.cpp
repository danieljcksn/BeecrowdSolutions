#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

int digitos(int n){
    int cont = 0;
    if(n < 10)
        return 1;

    while(n > 0){
        n /= 10;
        cont++;
    }

    return cont;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int p;

    cin >> p;

    ull cont = 0;  

    for(int i = 1; i <= p; ++i)
        cont += digitos(i);


    cout << cont << '\n';

    return 0;
}