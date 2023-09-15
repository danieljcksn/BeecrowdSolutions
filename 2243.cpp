#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n; cin >> n;

	vector<int> heights(n);

	for(int i=0; i<n; ++i) cin >> heights[i];

	vector<int> fromLeft(n), fromRight(n);

	fromLeft[0] = 1;
	fromRight[n-1] = 1;

	// A maior altura possível para o triângulo, considerando apenas a parte esquerda do mesmo 
	for(int i=1; i<n; ++i){
		fromLeft[i] = min(fromLeft[i-1]+1, heights[i]);
	}

	// ... considerando apenas a parte direita 
	for(int i=n-2; i >= 0; --i){
		fromRight[i] = min(fromRight[i+1]+1, heights[i]);
	}

	// Encontrar o ponto em que o menor lado seja o máximo
	int ans = -1;

	for(int i=0; i<n; ++i){
		ans = max(ans, min(fromLeft[i], fromRight[i]));
	}

	cout << ans << '\n';


}
