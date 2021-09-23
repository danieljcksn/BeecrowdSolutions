#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    double R, L, PI = 3.1415;
    
    cin >> R >> L;
 
    double vol = (double)4/(double)3 * (PI*R*R*R);
    cout << floor(L / vol) << '\n';
    
    return 0;
}
