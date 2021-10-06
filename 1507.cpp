#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
	int t;
	cin >> t;
	
	while(t--){
		string s;
		
		int q;
		cin >> s >> q;
		
		while(q--){
			string str;
			cin >> str;
			
			int idx = 0;
			
			for(int i = 0; i < s.size() && idx < str.size(); ++i)
				if(s[i] == str[idx]) idx++;
			
			if(idx == str.size()) cout << "Yes\n";
			else cout << "No\n";
		}
	}		
		
    return 0;
}
