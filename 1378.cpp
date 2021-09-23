#include <bits/stdc++.h>

using namespace std;

#define x first
#define y second
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
#define debug(x) cout << "DEBUG: " << x << endl;


typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector <ii> vii;

ll squared_dist(ii a, ii b){
	ll i = (b.x-a.x) * (b.x-a.x);
	ll j = (b.y-a.y) * (b.y-a.y);

	return (i + j);
}

/*check if (a, b, c) is an isosceles triangle
bool verify(ii a, ii b, ii c){
	//a-b|c
	ll cat = squared_dist(a,c);
	if(cat == squared_dist(b, c))
		if(cat != squared_dist(a, b))
			return true;

	cat = squared_dist(a,b);
	if(cat == squared_dist(c, b))
		if(!cat == squared_dist(a, c))
			return true;

	cat = squared_dist(a,b);
	if(cat == squared_dist(c, a))
		if(!cat == squared_dist(b, c))
			return true;

	return false;
}*/

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	while(true){
		int n;

		cin >> n;
		if(!n) break;

		vii p(n);
		FOR(i, n)
			cin >> p[i].x >> p[i].y;

		ll ans = 0;
		for(int i = 0; i < n; ++i){
			unordered_map<ll, ll> a;
			for(int j = 0; j < n; ++j){
				ll dist = squared_dist(p[i], p[j]);
				//debug(dist);
				if(a.find(dist) == a.end())
					a.insert({dist, 1});
				else
					a.find(dist)->y++;
			}

			for(auto it = a.begin(); it != a.end(); ++it){
				//cout << it->second << " - ";
				ll k = it->second;
				ans += (k * (k-1) / 2);
			}
			a.clear();
		}
		
		cout << ans << '\n';
	}
	
    return 0;
}
