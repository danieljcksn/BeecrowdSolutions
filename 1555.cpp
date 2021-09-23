#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, rafael, beto, carlos, n;

    cin >> n;

    while(n--){
        cin >> x >> y;
        rafael = 9*x*x + y*y;
        beto = 2*x*x + 25*y*y;
        carlos = -100*x + y*y*y;
        
        if(rafael > beto && rafael > carlos)
            cout << "Rafael ganhou\n";
        else if(beto > rafael && beto > carlos)
            cout << "Beto ganhou\n";
        else
            cout << "Carlos ganhou\n";
    }

    return 0;
}
