#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int x, y;

        cin >> x >> y;

        if(x == y)
            break;

        if(x < y)
            cout << "Crescente\n";
        else
            cout << "Decrescente\n";
    }
    
    return 0;
}
