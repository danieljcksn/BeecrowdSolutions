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
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884

typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<ll> vi;
typedef pair<ll, ll> ii;

    //W -- idx
ll PD[200][60];

//returns the damage
ll pd(ll W, ll idx, vector<ii> proj){
    if(idx == 0 && W >= proj[idx].second)
        return proj[0].first;

    else if(idx == 0)
        return 0;

    if(PD[W][idx] != -1)
        return PD[W][idx];

    ll ans;
    if(W-proj[idx].second >= 0)
        ans = max(proj[idx].first + pd(W - proj[idx].second, idx-1, proj), pd(W, idx-1, proj));
    else
        ans = pd(W, idx-1, proj);
        
    return PD[W][idx] = ans;
}

int main(){_
    int t;
    cin >> t;

    while(t--){
        ll n, W, ans, castle_hp;
        cin >> n;

        //Poder / Peso
        vector<ii> proj(n);
        memset(PD, -1, sizeof(PD));

        FOR(i, n)
            cin >> proj[i].first >> proj[i].second;

        cin >> W >> castle_hp;

        if(ans >= castle_hp)
            cout << "Missao completada com sucesso\n";
        else
            cout << "Falha na missao\n";
    }

    return 0;
}
