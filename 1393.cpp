#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	unsigned long long int ans[41];

	ans[0] = 1;
	ans[1] = 1;

	for(int i=2; i<=40; ++i){
		ans[i] = ans[i-1] + ans[i-2];
	}

	while(true){
		int n; cin >> n;

		if(!n) break;

		cout << ans[n] << '\n';
	}
}
