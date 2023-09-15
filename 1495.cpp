#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, credits, s, r;

	while(cin >> n){
		cin >> credits;

		long long int ans = 0;
		vector<int> goalsToWin;

		for(int i=0; i<n; ++i){
			cin >> s >> r;

			if(s > r)
				ans += 3;
			else
				goalsToWin.push_back(r-s+1);
		}

		sort(goalsToWin.begin(), goalsToWin.end());

		for(int goals:goalsToWin){
			if(goals == 1){
				if(credits >= 1){
					credits -= 1;
					ans += 3;
				}else
					ans++;
			}else{
				if(credits >= goals){
					credits -= goals;
					ans += 3;
				}else{
					if(credits == goals - 1){
						credits -= (goals - 1);
						ans++;
					}else
						break;
				}
			}

		}

		cout << ans << '\n';
	}

}
