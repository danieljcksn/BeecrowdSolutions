//Problema 2864 - Qual é a Altura? - URI Online Judge
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int t, a, b, c, delta;
    double yMax;

    cin >> t;

    cout << fixed << setprecision(2);
    while(t--){
        cin >> a >> b >> c;

        delta = pow(b, 2) - 4 * a * c;
        yMax = -(double(delta) / double(4 * a));

        cout << yMax << endl; 
    }

    return 0;
}