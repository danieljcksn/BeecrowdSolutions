#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define _ ios_base::sync_with_stdio(0), cin.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884


typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int findMex(set<int> arr){
    int i = 0;

    while(true){
        if(arr.find(i) == arr.end()) break;
        i++;
    }

    return i;
}

int xorr(vi arr){
    int ans = 0;

    for(int i = 0; i < sz(arr); ++i)       
        ans ^= arr[i];

    return ans;
}

int main(){_
    int m[101][101], n, x, y;

    //Posições proibidas
    for(int i = 0; i <= 100; ++i)
        m[i][0] = 1000;
    for(int i = 0; i <= 100; ++i)
        m[0][i] = 1000;
    for(int i = 0; i <= 100; ++i)
        m[i][i] = 1000;
        

    //Estados perdedores
    m[1][2] = 0;
    m[2][1] = 0;

    set<int> acessivel;
    for(int i = 1; i <= 100; ++i){
        for(int j = 1; j <= 100; ++j){
            if(m[i][j] != 1000){
                for(int k = j-1; k >= 1; --k)
                    acessivel.insert(m[i][k]);
                for(int k = i-1; k >= 1; --k)
                    acessivel.insert(m[k][j]);
                for(int k = 1; i - k > 0 && j - k; k++)
                    acessivel.insert(m[i-k][j-k]);

                m[i][j] = findMex(acessivel);
            }
            acessivel.clear();
        }
    }

    cin >> n;
    vi arr(n);

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        arr[i] = m[x][y];
    }

    !xorr(arr) ?
        cout << "N\n":
        cout << "Y\n";
    return 0;
}
