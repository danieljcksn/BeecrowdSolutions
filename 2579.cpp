#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define debug(x) cout << "Debug: " << x << '\n';
 
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
    int l, c, x, y;

    cin >> l >> c >> x >> y;


    string ans;

    if((c-1)&1){
        if(y&1)
            ans = "Esquerda";
        else
            ans = "Direita";
    }else{
        if(x&1){
            if(y&1)
                ans = "Direita";
            else
                ans = "Esquerda";
        }else{
            if(y&1)
                ans = "Esquerda";
            else    
                ans = "Direita";
        }
    }


    cout << ans << endl;

    return 0;
}
