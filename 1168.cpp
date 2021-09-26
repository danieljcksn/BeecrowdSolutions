#include <bits/stdc++.h>
using namespace std;

#define a first
#define b second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define debug(x) cout << "Debug: " << x << '\n';
#define print(x) cout << x << '\n';

#define MOD 998244353
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884

typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<ull> vi;
typedef pair<int, int> ii;

int getDigit(char c){
    return (int)(c - '0');
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> qt = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  
    while(n--){
        string num;

        cin >> num;
        ll ans = 0;

        for(int i = 0; i < num.length(); ++i)
            ans += qt[getDigit(num[i])];

        cout << ans << " leds\n";
    }

    return 0;
}
