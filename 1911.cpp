#include <bits/stdc++.h>

using namespace std;

bool isEqual(string a, string b){
	int diff = 0;
	
	for(int i = 0; i < (int)a.size(); ++i){
		if(a[i] != b[i])
			diff++;
	}
	
	return(!(diff > 1));
}

int main(){
	int n;
	
	while(true){
		int ans = 0;
		cin >> n;
		
		if(!n)
			break;
		map<string, string> original;
		
		while(n--){
			string name, signature;
			
			cin >> name >> signature;
			
			original.insert({name, signature});
		}
		
		
		cin >> n;

		while(n--){
			string name, signature;
			
			cin >> name >> signature;
			
			if(original.find(name) != original.end()){
				if(!isEqual(original.find(name)->second, signature)){
					ans++;
				}
			}
		}
		
		cout << ans << '\n';
	}
	return 0;
}
