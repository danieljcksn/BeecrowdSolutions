#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int instance = 1;

    while(true){
        int n, c;
        cin >> n >> c;

        if (!n) break; 

        vector<pair<int, int>> books(n);

        // weight, interest
        for (int i = 0; i < n; ++i) cin >> books[i].first >> books[i].second;

        vector<vector<int>> dp(n + 1, vector<int>(c + 1, 0));

        for(int b = 1; b <= n; ++b){
            for(int w = 1; w <= c; ++w){
				if(w < books[b-1].first)
					dp[b][w] = dp[b - 1][w];
				else
					dp[b][w] = max(dp[b - 1][w], books[b - 1].second + dp[b - 1][w - books[b - 1].first]);
        	}	
    	}

		cout << "Caso " << instance++ << ": " << dp[n][c] << '\n';
	}
}
