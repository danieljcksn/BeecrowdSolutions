#include <bits/stdc++.h>

using namespace std;

int main(){
  	ios::sync_with_stdio(false);
  	cin.tie(NULL);
    
    int t; cin >> t;

    while(t--){
        long long int n;
        cin >> n;

        vector<long long int> items(n);
        for(int i=0; i<n; ++i)
            cin >> items[i];

        sort(items.rbegin(), items.rend());

        long long int ans = 0;

        for(int i=0; i<n; ++i){
            if((i+1)%3 == 0){
                ans += items[i];
            }
        }

        cout << ans << '\n';
    }
}

// 400 350 300 250 200 100
