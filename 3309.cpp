#include <bits/stdc++.h>

using namespace std;

int happyNumber(int x){
	int res = 0;
	
	while(x > 0){
		res += (x % 10) * (x % 10);
		
		x /= 10;
	}
	
	return res;
}

int main(){
	int n, ans = 0;
	
	cin >> n;
	
	while(n--){
		int x;
		
		cin >> x;
		
		set<int> previousValues;
		
		previousValues.insert(x);
		while(true){
			int res = happyNumber(x);
				
			if(res == 1){
				ans++;
				break;
			}
			
			if(previousValues.find(res) != previousValues.end())
				break;
				
			x = res;
			previousValues.insert(x);
		}
	}
	
	cout << ans << '\n';
	
	
	return 0;
}
