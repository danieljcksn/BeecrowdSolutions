#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

struct Edge {
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
};


long long int kruskal(vector<Edge> &edges, int n){
	long long int cost = 0;
	vector<int> tree_id(n);
	vector<Edge> result;

	for(int i = 0; i < n; i++)
		tree_id[i] = i;

	sort(edges.begin(), edges.end());

	for(Edge e : edges){
		if(tree_id[e.u] != tree_id[e.v]){
			cost += e.weight;
			result.push_back(e);

			int old_id = tree_id[e.u], new_id = tree_id[e.v];
			for (int i = 0; i < n; i++) {
				if (tree_id[i] == old_id)
					tree_id[i] = new_id;
			}
		}
	}

	return cost;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int r, c; cin >> r >> c;

	vector<Edge> edges(c+1);

	for(int i=0; i<c; ++i){
		Edge e;

		cin >> e.u >> e.v >> e.weight;

		e.u--;
		e.v--;


		edges.push_back(e);
	}


	cout << kruskal(edges, r) << '\n';
}
