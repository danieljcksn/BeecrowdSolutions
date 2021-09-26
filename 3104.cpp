#include <bits/stdc++.h>
using namespace std;

#define a first
#define b second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884


typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<ll> vi;
typedef pair<ll, ll> ii;

int getDigit(char a){
    return (int)(a - '0');
}

//https://www.hackerearth.com/practice/notes/get-the-modulo-of-a-very-large-number-that-cannot-be-stored-in-any-data-type-in-cc-1/
int main(){
    string A;
    int B;

    cin >> A >> B;

    ll ans = 0;

    for(int i = 0; i < A.size(); ++i) ans = (ans * 10 + getDigit(A[i])) % B;

    cout << ans << '\n';
    
    return 0;
}
