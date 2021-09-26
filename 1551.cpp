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
    cin.ignore();

    while(n--){
        string frase;
        getline(cin, frase);

        vector<bool> alfabeto(26, false);

        for(int i = 0; i < frase.length(); ++i){
            int intc = (int)frase[i];
            if(intc >= 97 && intc <= 122)
                alfabeto[(int)frase[i] % 97] = true;
        }   

        int qt = 0;

        for(int i = 0; i < alfabeto.size(); ++i)
            if(alfabeto[i])
                qt++;
            
        if(qt == 26)
            cout << "frase completa\n";
        else if(qt >= 13)
            cout << "frase quase completa\n";
        else
            cout << "frase mal elaborada\n";
    }
    return 0;
}
