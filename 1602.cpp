#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

const int MAX_SIZE = (int)2e6;

vector<bool>isprime(MAX_SIZE+1, true);
vector<int> prime;
vector<int> SPF(MAX_SIZE+1);
 
//Encontra todos os primos menores que n em O(n)
void eratosthenes_sieve(int N){
    isprime[0] = isprime[1] = false;
 
    for(int i = 2; i < N; i++){
        if(isprime[i]){
            prime.pb(i);
            SPF[i] = i;
        }

        for(int j = 0; j < (int)prime.size() && i * prime[j] < N && prime[j] <= SPF[i]; j++){
            isprime[i*prime[j]] = false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}

//O(sqrt(n))
int countDivisors(int n){
    int divisores = 0;
    for(int i = 1; i*i <= n; ++i){
        if(n % i == 0){
            if(n/i != i)
                divisores += 2;
            else
                divisores++;
        }
    }

    return divisores;
}

int main(){_
    eratosthenes_sieve(MAX_SIZE+1);
    vector<bool> c_isprime(isprime);
    int ans[MAX_SIZE+1];

    for(int i = 1; i * i <= MAX_SIZE; ++i)
        if(isprime[countDivisors(i*i)])
            c_isprime[i*i] = true;

    int res = 0;
    for(int i = 2; i <= MAX_SIZE; ++i){
        if(c_isprime[i]) res++;

        ans[i] = res;
    }

    int n;
    while(cin >> n)
        cout << ans[n] << '\n';
        
    return 0;
}
