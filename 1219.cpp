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
    
    int a, b, c;
    cout << fixed << setprecision(4);
    while(cin >> a >> b >> c){
        double a1 = (double)a, b1 = (double)b, c1 = (double)c;

        double p = (a1 + b1 + c1) / 2;
        double violets = sqrt(p*(p-a1)*(p-b1)*(p-c1));

        double rs = a1*b1*c1/sqrt((a1+b1+c1)*(b1+c1-a1)*(c1+a1-b1)*(a1+b1-c1));
        double sunflowers = rs * rs * PI;

        double rr = sqrt((p-a1)*(p-b1)*(p-c1)/p);
        double roses = rr * rr * PI;


        cout << sunflowers - violets << " " << violets - roses << " " << roses << '\n';
    }


    return 0;
}
