#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ull sequencia[18];

    sequencia[1] = 0;
    sequencia[2] = 1;
    for(int i = 3; i <= 17; ++i){
        if(i&1)
            sequencia[i] = sequencia[i-1] + sequencia[i-2];
        else
            sequencia[i] = sequencia[i-1] * sequencia[i-2];
    }

    int n;

    while(cin >> n)
        cout << sequencia[n] << '\n';

    return 0;
}
