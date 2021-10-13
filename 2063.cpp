#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define debug(x) cout << "Debug: " << x << '\n';
#define print(x) cout << x << '\n';
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884


typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;


//O(log(min(a, b))
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
 
int lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

int lcm_array(vector<int> numbers){
    int mmc = lcm(numbers[0], numbers[1]);

    for(int i = 2; i < numbers.size(); ++i){
        mmc = lcm(mmc, numbers[i]);
    }

    return mmc;
}

int main(){_
    int n;

    cin >> n;

    vector<int> holes (n+1);

    int tun;
    FOR(i, n){
        cin >> tun;
        holes[i+1] = tun;
    }


    vector<int> ans;    
    for(int i = 1; i <= n; ++i){
        int cont = 1;

        int k = i;
        while(holes[k] != i){
            cont++;
            k = holes[k];
        }

        ans.pb(cont);
    }

    cout << lcm_array(ans) << endl;


    return 0;
}
