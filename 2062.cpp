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

#define MOD 998244353
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884


typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<ull> vi;
typedef pair<int, int> ii;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;

    cin >> n;

    vector<string> words;
    for(int i = 0; i < n; ++i){
        string str;
        cin >> str;

        if(str.length() == 3){
            if((str[0] == 'U' && str[1] == 'R') || (str[0] == 'O' && str[1] == 'B'))
                str[2] = 'I';
        }
        words.push_back(str);
    }


    for(int i = 0; i < words.size(); ++i){
        if(i == words.size() - 1)
            cout << words[i] << endl;
        else
            cout << words[i] << " ";
    }

    return 0;
}
