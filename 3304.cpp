#include <bits/stdc++.h>

using namespace std;

bool search(long long x, vector<long long> numbers){
	int l = 0, r = (int)numbers.size()-1;
	
    while (l <= r){
        int m = l + (r - l) / 2;
  
        if (numbers[m] == x)
            return true;
  
        if (numbers[m] < x)
            l = m + 1;
  
        else
            r = m - 1;
    }
    
    return false;
}

int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
	long long n;
	

	vector<long long> numbers;
	
	for(int digits = 1; digits <= 8; ++digits){
		for(long long mask = 0; mask < (1 << digits); mask++){
			long long newNum = 0;
			for(long long i = 0; i < digits; ++i){
				if(mask & (1 << i)){
						newNum += 7 * pow(10, i);
				}else
						newNum += 4 * pow(10, i);
			}
			
			numbers.push_back(newNum);
		}
	}
	
	while(cin >> n){
		bool ans = search(n, numbers);
		if(ans)
			cout << "sortudo\n";
		else{	
			ans = false;
			
			for(int i = 0; i < (int)numbers.size(); ++i){
				if(numbers[i] > n)
					break;
				if(n % numbers[i] == 0){
					ans = true;
					break;
				}
			}
			if(ans)
				cout << "quase sortudo\n";
			else
				cout << "azarado\n";
		}
	}
	
	return 0;
}
