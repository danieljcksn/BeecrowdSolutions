//Problema 2165 - Tuitando | URI Online Judge
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string a;
    
    getline(cin, a);

    if(a.size() <= 140)
        cout << "TWEET\n";
    
    else
        cout << "MUTE\n";
    return 0;
}
