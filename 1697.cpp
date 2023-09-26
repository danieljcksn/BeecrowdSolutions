#include <bits/stdc++.h>

using namespace std;

vector<int> SieveOfEratosthenes(int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
  
    for(int p = 2; p * p <= n; p++) {
        if(prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
	
	vector<int> primes;

	primes.push_back(1);
    for (int p = 2; p <= n; p++)
        if (prime[p])
			primes.push_back(p);

	return primes;
}
  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	vector<int> primes = SieveOfEratosthenes(2e6);

	int t; cin >> t;

	while(t--){
		int n; cin >> n;

		set<int> arr;

		for(int i=0; i<n; ++i){
			int e; cin >> e;
			arr.insert(e);
		}

		for(int i:primes){
			if(arr.find(i) == arr.end()){
				cout << i-1 << '\n';
				break;
			}
		}
	}
}
