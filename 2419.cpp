#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int m, n; cin >> m >> n;

	char map[m][n];

	for(int i=0; i<m; ++i){
		string line; cin >> line;

		for(int j=0; j<n; ++j) map[i][j] = line[j];
	}

	int ans = 0;
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j){
			if(map[i][j] != '#') continue;

			if(i == 0 || j == 0 || i == m-1 || j == n-1){
				ans++; 
				continue;
			}

			if(map[i-1][j] == '.' || map[i+1][j] == '.' || map[i][j-1] == '.' || map[i][j+1] == '.') ans++;
		}
	}

	cout << ans << '\n';
	
}
