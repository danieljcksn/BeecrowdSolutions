#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define RFOR(i, a, b) for(int i = a; i > b; --i)

typedef unsigned long long int ull;

bool isPrime(int n){
    if(n < 2)
        return false;

    for(int i = 2; i <= sqrt(n); ++i){
        if(n % i == 0 && n != i)
            return false;
    }

    return true;
}


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, p1, p2;

    cin >> n;

    if(n % 2 == 0)
        n--;

    for(int i = n; i >= 5; i-=2){
        if(isPrime(i)){
            if(isPrime(i-2)){
                p1 = i-2;
                p2 = i;
                break;
            }
        }
    }

    cout << p1 << ' ' << p2 << '\n';
    return 0;
}