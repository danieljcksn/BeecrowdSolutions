#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    
    cin >> t;
    
    set<int> carneiros;
    int x, n;

    while(t--){
        cin >> n;

        while(n--){
            cin >> x;
            carneiros.insert(x);
        }
      
        cout << carneiros.size() << '\n';
        carneiros.clear();
    }

    return 0;
}
