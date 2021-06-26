#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;

    while(1){
        cin >> n;

        if(!n)
            break;

        vector<long long> A(n);

        for(int i = 0; i < n; ++i){
            cin >> A[i];
        }

        sort(A.begin(), A.end());
    
        pair<ll, ll> last = {A[0], 1};
        ll ans = last.first;
        for(int i = 1; i < n; ++i){
            if(A[i] == last.first)  
                last.second++;
            else{
                if(last.second & 1){
                    ans = last.first;
                    break;
                }
                else
                    last = {A[i], 1};
            }
        }
        
        if(last.second & 1)
            ans = last.first;

        cout << ans << '\n';
    }

    


    return 0;
}
