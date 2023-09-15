#include <bits/stdc++.h>

#define MOD (long long int)(1e9+7)

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int q; cin >> q;

	vector<int> employees(n);

	for(int i=0; i<n;++i) employees[i] = i;

	while(q--){
		int op; cin >> op;

		if(op == 1){
			int a, b; cin >> a >> b;

			swap(employees[a-1], employees[b-1]);
		}else{
			int e; cin >> e;
			int ans = 0;

			int i = e-1;

			while(employees[i] != e-1){
				i = employees[i];
				ans++;
			}

			cout << ans << '\n';
		}
	}
}

/*
	t = 0 -> 0
	t = 1 -> 
*/
