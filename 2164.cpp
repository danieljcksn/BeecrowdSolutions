#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double n, ans;
    
    cin >> n;
    
    ans = (pow((1+sqrt(5))/2, n) - pow((1-sqrt(5))/2, n))/sqrt(5);
    
    cout << fixed << setprecision(1);
    
    cout << ans << '\n';
    
    return 0;
}
