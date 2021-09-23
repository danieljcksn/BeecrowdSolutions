#include <bits/stdc++.h> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    bool ans = false;

    if(a == b || a == c || b == c)
        ans = true;
    if(a == (b + c) || b == (a + c) || c == (a + b))
        ans = true;

    ans ? cout << "S\n" : cout << "N\n";


    return 0;
}
