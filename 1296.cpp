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

bool isTriangle(double a, double b, double c){
	return(a <= (b + c) && b <= (a+c) && c <= (a + b));
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	double a, b, c;

	cout << fixed << setprecision(3);
	while(cin >> a >> b >> c){
		if(isTriangle(a, b, c)){
      //http://jwilson.coe.uga.edu/emt725/Medians.Triangle/Area.Medians.Tri.html
			double ans = ((double)1/(double)3)*sqrt(2*(a*a*b*b + b*b*c*c+ c*c*a*a) - (a*a*a*a + b*b*b*b + c*c*c*c));
			if(ans > EPS)
				cout << ans << '\n';
			else
				cout << "-1.000\n";
		}else
			cout << "-1.000\n";
	}


    return 0;
}
