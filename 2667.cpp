#include <bits/stdc++.h> 
 
using namespace std;
 
int mod_3(string num){
    int ans = 0;
 
    for (int i = 0; i < num.length(); i++)
        ans = (ans * 10 + (int)num[i] - '0') % 3;
 
    return ans;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string num;
 
    cin >> num;
 
    cout << mod_3(num) << '\n';
 
 
    return 0;
}
