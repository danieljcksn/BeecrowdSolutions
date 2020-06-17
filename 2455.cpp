//Problema 2455 - Gangorra - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int p1, c1, p2, c2;

    cin >> p1 >> c1 >> p2 >> c2;

    p1 = p1 * c1;
    p2 = p2 * c2;
    if(p1 == p2)
        cout << "0\n";
    else if(p1 < p2)
        cout << "1\n";
    else
        cout << "-1\n";
    
    return 0;
}