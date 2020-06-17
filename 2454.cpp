//Problema 2454 - Flíper - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    bool p, r;

    cin >> p >> r;

    if(!p)
        cout << "C\n";
    else if(!r)
        cout << "B\n";
    else
        cout << "A\n"; 
    return 0;
}