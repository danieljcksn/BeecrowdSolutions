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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;
    if(n == 1){
        cout << "0\n";
        return 0;
    }

    int arr[n+2];
    arr[1] = 1;
    arr[2] = 0;
    arr[3] = 1;

    for(int i = 4; i <= n; ++i)
        arr[i] = (arr[i-2]%MOD + arr[i-3]%MOD)%MOD;

    cout << arr[n]<< '\n';

    return 0;
}
