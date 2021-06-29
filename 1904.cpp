#include <bits/stdc++.h>

using namespace std;

#define MAX 10000000

int cont(int n, int p){
    int cont = 0, pot = p;

    while((n / p) > 0){
        cont += n/p;
        p *= pot;
    }

    return cont;
}

//https://cp-algorithms.com/algebra/factorial-modulo.html#toc-tgt-2
bool isEven(int n, int k){
    if(cont(n + k - 1, 2) > cont(k, 2) + cont(n-1, 2))
        return true;

    return false;
}

vector<bool> SieveOfEratosthenes(int n){
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;
 
    for(int p = 2; p * p <= n; p++)
        if(prime[p] == true)
            for(int i = p * p; i <= n; i += p)
                prime[i] = false;

    return prime;
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    vector<bool> primeNumbers = SieveOfEratosthenes(MAX);
    
    int a, b;
    cin >> a >> b;
    
    //Garantindo que a < b
    if(a > b)
        swap(a, b);

    // nº de primos no intervalo [a, b]
    int countPrimes = 0;
    for(int i = a; i <= b; ++i)
        if(primeNumbers[i])
            countPrimes++;

    // nº de fatores que devem ser tomados
    int numFactors = b-a;
    
    if(a == b)
        cout << "?\n";
    else{
        if(countPrimes == 0)
            cout << "Bob\n";
        else{
            if(isEven(countPrimes, numFactors)) 
                cout << "Bob\n";
            else
                cout << "Alice\n";
        }
    }

    return 0;
}
