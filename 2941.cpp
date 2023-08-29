#include <bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>>& graph, vector<bool>& visited, int v){
    queue<int> q;
    visited[v] = true;
    q.push(v);

    while(!q.empty()){
        int currV = q.front();
        q.pop();

        visited[currV] = true;

        for(int adj:graph[currV]){
            if(!visited[adj]){
                q.push(adj);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, n;
    cin >> m >> n;

    vector<vector<int>> graph(m+1);
    map<string, int> dic;

    int inserted = 1;

    for(int i=0; i<n; ++i){
        string a, rel, b;

        cin >> a >> rel >> b;

        if(dic.find(a) == dic.end()){
            dic[a] = inserted++;
        }

        if(dic.find(b) == dic.end()){
            dic[b] = inserted++;
        }

        graph[dic[a]].push_back(dic[b]);
        graph[dic[b]].push_back(dic[a]);
    }

    vector<bool> visited(m+1, false);

    int ans = 0;

    for(int i=1; i<=m; ++i){
        if(!visited[i]){
            ans++;
            bfs(graph, visited, i);
        }
    }

    cout << ans << '\n';
}
