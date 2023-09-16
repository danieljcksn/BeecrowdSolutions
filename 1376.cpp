#include <bits/stdc++.h>

using namespace std;

// true if A is attacked by B
bool gotAttacked(int a, int b, int n){
	if(a == 0 && b == n-1) return true;

	return b+1 == a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	// cout << gotAttacked(2, 0, 3) << '\n';
	// cout << gotAttacked(0, 2, 3) << '\n';
	// cout << gotAttacked(0, 1, 3) << '\n';

	while(true){
		int n, r, c, k; cin >> n >> r >> c >> k;

		if(!n) break;

		int mtx[r][c];

		for(int i=0; i<r; ++i){
			for(int j=0; j<c; ++j){
				cin >> mtx[i][j];
			}
		}

		while(k--){
			int ans[r][c];

			for(int i=0; i<r; ++i){
				for(int j=0; j<c; ++j){
					int current = mtx[i][j];
					bool lost = false;

					if(i+1 < r){
						if(gotAttacked(current, mtx[i+1][j], n)){
							ans[i][j] = mtx[i+1][j];
							lost = true;
						}
					}

					if(i-1 >= 0){
						if(gotAttacked(current, mtx[i-1][j], n)){
							ans[i][j] = mtx[i-1][j];
							lost = true;
						}
					}

					if(j+1 < c){
						if(gotAttacked(current, mtx[i][j+1], n)){
							ans[i][j] = mtx[i][j+1];
							lost = true;
						}
					}

					if(j-1 >= 0){
						if(gotAttacked(current, mtx[i][j-1], n)){
							ans[i][j] = mtx[i][j-1];
							lost = true;
						}
					}

					if(!lost){
						ans[i][j] = mtx[i][j];
					}
				}
			}

			for(int i=0; i<r; ++i)
				for(int j=0; j<c; ++j)
					mtx[i][j] = ans[i][j];
		}

		for(int i=0; i<r; ++i){
			for(int j=0; j<c; ++j){
				cout << mtx[i][j];

				if(j != c-1){
					cout << " ";
				}
			}
			cout << '\n';
		}
	}

}
