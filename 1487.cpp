#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, t, instance = 1; 

	while(true){
		cin >> n >> t;

		if(!n) break;	

		vector<int> points(t+1, 0);

		// duration, score
		vector<pair<int, int>> rides(n);

		for(int i=0; i<n; ++i) cin >> rides[i].first >> rides[i].second;

		for(int time=1; time <= t; ++time){
			for(pair<int, int> ride:rides){
				if(time >= ride.first){
					points[time] = max(points[time], ride.second + points[time-ride.first]);
				}
			}
		}

		cout << "Instancia " << instance << '\n' << points[t] << "\n\n";
		instance++;
	}
}

/*
	t = 0 -> 0
	t = 1 -> 
*/
