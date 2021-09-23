#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;

    while(cin >> n){
        vector<string> codigos;
        string code;
      
        while(n--){
            cin >> code;
            codigos.push_back(code);
        }
        
        sort(codigos.begin(), codigos.end());

        for(int i = 0; i < codigos.size(); ++i)
            cout << codigos[i] << '\n';

        codigos.clear();
    }

    return 0;
}
