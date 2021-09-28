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
    map<char, char> dictionary;

    dictionary['1'] = '`';
    dictionary['2'] = '1';
    dictionary['3'] = '2';
    dictionary['4'] = '3';
    dictionary['5'] = '4';
    dictionary['6'] = '5';
    dictionary['7'] = '6';
    dictionary['8'] = '7';
    dictionary['9'] = '8';
    dictionary['0'] = '9';
    dictionary['-'] = '0';
    dictionary['='] = '-';

    dictionary['W'] = 'Q';
    dictionary['E'] = 'W';
    dictionary['R'] = 'E';
    dictionary['T'] = 'R';
    dictionary['Y'] = 'T';
    dictionary['U'] = 'Y';
    dictionary['I'] = 'U';
    dictionary['O'] = 'I';
    dictionary['P'] = 'O';
    dictionary['['] = 'P';
    dictionary[']'] = '[';
    dictionary['\\'] = ']';

    dictionary['S'] = 'A';
    dictionary['D'] = 'S';
    dictionary['F'] = 'D';
    dictionary['G'] = 'F';
    dictionary['H'] = 'G';
    dictionary['J'] = 'H';
    dictionary['K'] = 'J';
    dictionary['L'] = 'K';
    dictionary[';'] = 'L';
    dictionary['\''] = ';';

    dictionary['X'] = 'Z';
    dictionary['C'] = 'X';
    dictionary['V'] = 'C';
    dictionary['B'] = 'V';
    dictionary['N'] = 'B';
    dictionary['M'] = 'N';
    dictionary[','] = 'M';
    dictionary['.'] = ',';
    dictionary['/'] = '.';

    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.size(); ++i){
            if(str[i] != ' ')
                str[i] = dictionary[str[i]];
        }
        for(int i = 0; i < str.size(); ++i){
            cout << str[i];
        }
        cout << '\n';
    }
    return 0;
}
