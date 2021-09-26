#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef vector<ll> vll;
 
int getDigit(char a){
    return (int)(a - '0');
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int fat[10];
    fat[0] = 1;
    fat[1] = 1;

    for(int i = 2; i < 10; ++i)
        fat[i] = i * fat[i-1];
        
    while(true){
        string n;

        cin >> n;

        if(n == "0")
            break; 

        ll ans = 0;
        int cont = 1;
        for(int i = n.length() - 1; i >= 0; --i){
            ans += getDigit(n[i]) * fat[cont];
            cont++;
        }

        cout << ans << '\n';
    }

    return 0;
}
