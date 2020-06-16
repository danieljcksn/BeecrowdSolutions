//Problema 2386 - Telescópio - URI Online Judge
#include <iostream>

using namespace std;

int main(){ 
    int a, n, cont = 0, f;

    cin >> a >> n;

    for(int i = 0; i < n; i++){
        cin >> f;
        if(f * a >= 40000000)
            cont++;
    }
    
    cout << cont << endl;

    return 0;
}