//Problema 2373 - Garçom - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, l, c, quebrados = 0;

    cin >> n;

    while(n--){
        cin >> l >> c;

        if(l > c)
            quebrados += c;
    }

    cout << quebrados << endl;


    return 0;
}