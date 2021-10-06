#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

bool comp(pair<int, char> a, pair<int, char> b){
	if(a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}

int main(){_
	string str;
	
	vector<string> ans;
	
	while(getline(cin, str)){
		map<char, int> frequency;
		
		
		FOR(i, str.size()){
			if(frequency.find(str[i]) == frequency.end())
				frequency.insert({str[i], 1});
			else
				frequency.find(str[i])->second++;
		}
		
		vector<pair<int, char>> sorted;
		for(auto it = frequency.begin(); it != frequency.end(); ++it)
			sorted.pb({it->second, it->first});
			
		sort(all(sorted), comp);
		
		string anss = "";
		for(int i = 0; i < sorted.size(); ++i)
			anss += to_string((int)sorted[i].second) + " " + to_string(sorted[i].first) + "\n";
		
		ans.pb(anss);
	}
	
	for(int i = 0; i < ans.size(); ++i){
		if(i == ans.size() - 1) cout << ans[i];
		else cout << ans[i] << endl;
	}
			
		
    return 0;
}
