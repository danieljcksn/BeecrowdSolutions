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
typedef vector<int> vi;
typedef pair<int, int> ii;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double m[12][12];
    char op;

    cin >> op;

    FOR(i, 12)
        FOR(j, 12)
            cin >> m[i][j];

    
    double ans = 0.0;
    cout << fixed << setprecision(1); 
    for(int i = 1; i < 12; ++i)
        for(int j = 0; j < i; ++j)
            ans += m[i][j];
    if(op == 'S'){
        cout << ans << '\n';
    }else{
        double total = 0.0;
        for(int i = 11; i >= 1; --i)
            total += (double)i;

        cout << ans / total << '\n';
    }
    return 0;
}
