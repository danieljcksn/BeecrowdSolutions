#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

int mmc(int a, int b){
    return (a*b)/__gcd(a,b);
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);\

    int n, a, b;

    while(true){
        cin >> n >> a >> b;

        if(!n && !a && !b)
            break;
            
        cout << int(n/a + n/b - n/mmc(a, b)) << '\n';
    }

    return 0;
}
