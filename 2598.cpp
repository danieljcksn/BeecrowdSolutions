#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, m, n;

    cin >> c;
    
    while(c--){
        cin >> n >> m;

        if(n%m == 0)
            cout << (int) n/m << '\n';

        else 
            cout << (int) n/m + 1 << '\n';
    }



    return 0;
}