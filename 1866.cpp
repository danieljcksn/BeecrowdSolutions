//Problema 1866 - Conta - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int c, n;

    cin >> c;

    while(c--){
        cin >> n;

        if(n % 2 == 0)
            cout << "0\n";
        else
            cout << "1\n";  
    }

    return 0;
}