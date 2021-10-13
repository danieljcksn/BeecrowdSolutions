#include <bits/stdc++.h>
using namespace std;

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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;

    getline(cin, str);
    
    bool flag = false;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ' '){
            cout << ' ';
            flag = !flag;
            continue;  
        } 
        
        if((i % 2 == 0) == flag)
            cout << str[i];
    }

    cout << endl;

    return 0;
}
