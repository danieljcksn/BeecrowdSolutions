#include <bits/stdc++.h>

using namespace std;

void printQueue(queue<string> q){
	while(!q.empty()){
		cout << q.front() << (q.size() > 1 ? ", ":"");
		q.pop();
	}

	cout << '\n';
}

bool match(string s, string pattern){
	int n = pattern.length(), i, j;
	bool match = false;

	queue<string> q;
	set<string> inserted;

	q.push(s); 
	inserted.insert(s);

	for(i=0; i<n; ++i){
		if(pattern[i] == '*' && i == n-1 && q.size()){
			return true;
		}

		char currentChar;

		if(pattern[i] != '*'){
			currentChar = pattern[i];

			queue<string> newq;
			bool anyMatch = false;

			inserted.clear();

			while(!q.empty()){
				string str = q.front();
				q.pop();

				if(str[0] == currentChar){
					if(str.size() > 1){
						string sbb = str.substr(1);

						if(inserted.find(sbb) == inserted.end()){
							inserted.insert(sbb);
							newq.push(sbb);
						}
					}else if(str.size() == 1){
						anyMatch = true;
					}
				}
			}

			if(i == n-1 && anyMatch){
				return true;
			}

			q = newq;
			continue;
		}
		
		for(j = i+1; j<n; ++j){
			if(pattern[j] != '*'){
				currentChar = pattern[j];
				i = j-1;
				break;
			}
		}
		
		currentChar = pattern[i+1];
		queue<string> newq;

		inserted.clear();
	
		while(!q.empty()){
			string str = q.front();
			q.pop();

			for(int subs = 0; subs < str.size(); ++subs){
				if(str[subs] == currentChar){
					if(str.size() > 1){
						string sbb = str.substr(subs);
						if(inserted.find(sbb) == inserted.end()){
							inserted.insert(sbb);
							newq.push(sbb);
						}
					}else
						newq.push(str);
				}
			}
		}

		q = newq;
	}

	return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string p; cin >> p;

	int n; cin >> n;

	vector<string> files(n);

	for(int i=0; i<n; ++i) cin >> files[i];

	for(string file:files){
		if(match(file, p))
			cout << file << '\n';
	}
}
