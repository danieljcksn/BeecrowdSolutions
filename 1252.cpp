#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef vector<int> vi;

int m;
bool comp(int a, int b){
	int modA, modB;
	modA = a % m;
	modB = b % m;
	
	if(a < 0) modA = -1*(abs(a) % m);
	if(b < 0) modB = -1*(abs(b) % m);

	if(modA < modB) return true;
	if(modB < modA) return false;
	if(a&1 && !(b&1)) return true;
	if(b&1 && !(a&1)) return false;
	if(a&1 && b&1) return a > b;
	return a < b;	
}

int main(){_
	while(true){
		int n;
		
		cin >> n >> m;
		
		if(!n && !m){
			cout << "0 0\n";
			break;
		}
		
		vi arr(n);
		
		FOR(i, n) cin >> arr[i];
		
		sort(all(arr), comp);
		cout << n << ' ' << m << endl;
		
		for(int i = 0; i < n; ++i) cout << arr[i] << endl;
	}
    return 0;
}
