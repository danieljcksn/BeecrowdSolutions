//Problema 2339 - Aviões de Papel - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int c, p, f;

    cin >> c >> p >> f;

    if(p >= c * f)
        cout << "S\n";
    else 
        cout << "N\n";

    return 0;
}