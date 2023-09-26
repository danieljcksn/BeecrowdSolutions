#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

set<int> getParents(vector<vector<int>>& graph, int a){
	queue<int> q;
	vector<bool> visited(graph.size(), false);

	visited[a] = true;
	q.push(a);

	set<int> parents;
	parents.insert(a);

	while(!q.empty()){
		int t = q.front(); q.pop();

		visited[t] = true;

		for(int adj:graph[t]){
			if(!visited[adj]){
				visited[adj] = true;
				q.push(adj);
				parents.insert(adj);
			}
		}

	}

	return parents;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, c, t; cin >> n >> c >> t;

	vector<vector<int>> graph(n+1);
	map<string, int> id;

	for(int i=0; i<c; ++i){
		string p1, p2, son;

		cin >> p1 >> p2 >> son;

		if(id.find(p1) == id.end()){
			// cout << p1 << " não está em id, cujo id.size() + 1 é " << id.size() + 1 << '\n';
			id[p1] = id.size() + 1;
		}
		if(id.find(p2) == id.end()){
			id[p2] = id.size() + 1;
		}
		if(id.find(son) == id.end()){
			id[son] = id.size() + 1;
		}


		// graph[id[p1]].push_back(id[son]);
		// graph[id[p2]].push_back(id[son]);
		graph[id[son]].push_back(id[p1]);
		graph[id[son]].push_back(id[p2]);
	}

	for(int i=0; i<t; ++i){
		string a, b; cin >> a >> b;

		// if(id.find(a) == id.end()){
		// 	id[a] = id.size() + 1;
		// }
		// if(id.find(b) == id.end()){
		// 	id[b] = id.size() + 1;
		// }	
		set<int> parentsA = getParents(graph, id[a]);
		set<int> parentsB = getParents(graph, id[b]);

		bool flag = false;

		for(auto it = parentsA.begin(); it != parentsA.end(); ++it){
			if(parentsB.find(*it) != parentsB.end()){
				flag = true;
				break;
			}
		}

		cout << (flag?"verdadeiro\n":"falso\n");
	}

}
