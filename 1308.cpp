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
#define PI 3.1415926535897


typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<int> vi;
typedef pair<int, int> ii;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;

    cin >> t;
    while(t--){
        ull n;

        cin >> n;

        double sqrr = (double)(8 * n + 1);
        ull ans =(ull)floor((-1 + sqrt(sqrr))/2);
        cout << ans << '\n';
    }

    return 0;
}
