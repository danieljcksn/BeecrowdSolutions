#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, va, vb;
    double segundos;

    while(cin >> s >> va >> vb){
        if(va <= vb)
            cout << "impossivel\n";
        else{
            segundos = double(s) / double(va-vb);
            
            cout << fixed << setprecision(2);
            cout << segundos << '\n';
        }
    }

    return 0;
}
