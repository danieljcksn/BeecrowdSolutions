#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define debug(x) cout << "Debug: " << x << '\n';
#define print(x) cout << x << '\n';

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884

typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<ull> vi;
typedef pair<int, int> ii;

ull modMul(ull a, ull b){
    return((a % MOD) * (b % MOD) % MOD);
}

ull modSum(ull a, ull b){
    return((a % MOD) + (b % MOD) % MOD);
}

ull pot(ull a, ull b) {
    ull res = 1;
    while(b > 0) {
        if(b & 1)
            res = modMul(res, a);
        a = modMul(a, a);
        b >>= 1;
    }
    return res % MOD;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map<char, int> dictionary;

    char digit = 'A';
    for(int i = 0; i <= 25; ++i, digit++)
        dictionary.insert({digit, i});
    
    string str;
    while(cin >> str){
        int len = str.length() - 1;

        ull total = 0, potencia = 0;
        for(int i = len; i >= 0; --i){
            ull res = modMul(dictionary[str[i]], pot(26, potencia));
            total = modSum(total, res);
            potencia++;
        }

        print(total % MOD);
    }

    return 0;
}
