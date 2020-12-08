#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

string solve(string n){
    sort(n.begin(), n.end());

    string ans = "";

    for(int i = 0; i < n.size(); ++i)
        if(n[i] != '0'){
            ans += n[i];
            n.erase(n.begin() + i);
            break;
        }

    for(int i = 0; i < n.size(); ++i)
            ans += n[i];
    

    return ans;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
    int t;

    cin >> t;

    string n;
    while(t--){
        cin >> n;
        cout << solve(n) << '\n';
    }


    return 0;
}
