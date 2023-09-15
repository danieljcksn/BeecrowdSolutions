#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	while(true){
		int n, l; cin >> n >> l;

		if(!n) break;

		vector<int> free_lockers(l);

		for(int i=0; i<l; ++i){
			cin >> free_lockers[i];
		}

		// mx.first = free rooms in the interval [mx.second.first, mx.second.second]
		pair<int, pair<int, int>> mx = {-1, {-1, -1}};

		for(int i=0; i<l; ++i){
			auto upper = upper_bound(free_lockers.begin(), free_lockers.end(), free_lockers[i] + n - 1);

			int d = distance(free_lockers.begin(), upper) - i;
			if(d > mx.first)
				mx = make_pair(d, make_pair(free_lockers[i], free_lockers[i] + n - 1));
		}

		cout << mx.second.second - mx.second.first + 1 - mx.first << '\n';
	}

}
