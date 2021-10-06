#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main(){_
	int n;
	
	while(cin >> n){	
		vector<ll> pacote(n), prefsum(n);
		
		for(int i = 0; i < n; ++i){
			cin >> pacote[i];
			
			if(i == 0)
				prefsum[0] = pacote[0];
			else
				prefsum[i] = pacote[i] + prefsum[i-1];
		} 
		
		ll m = -1, l = 0;
		
		for(int i = 0; i < n; ++i){
			if(i == n-1) break;
			if(min(prefsum[i], prefsum[n-1] - prefsum[i]) > m){
				m = min(prefsum[i], prefsum[n-1] - prefsum[i]);
				l = max(prefsum[i], prefsum[n-1] - prefsum[i]);
			}
		}	
		
		cout << m << ' ' << l << '\n';
	}
	
    return 0;
}
