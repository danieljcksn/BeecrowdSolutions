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
 

int main() {
    int n, h, c, l;

    cout << fixed << setprecision(4);
    while(cin >> n >> h >> c >> l){
        double x = sqrt((double)h*h + (double)c*c);

        double ans = l * x * n;
        cout << ans / 10000 << '\n';
    }

    return 0;
}
