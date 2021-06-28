#include <bits/stdc++.h>

using namespace std;


vector<vector<int>> grafo(1000001);

bool bfs(int s, int n, int meta, vector<int> &dist, vector<int> &pred){
    vector<bool> visited(n, false);

    list<int> queue;

    visited[s] = true;
    dist[s] = 0;
    queue.push_back(s);

    while(!queue.empty()){
        s = queue.front();
        queue.pop_front();

        for(int i = 0; i < grafo[s].size(); ++i){
            if(!visited[grafo[s][i]]){
                visited[grafo[s][i]] = true;
                dist[grafo[s][i]] = dist[s] + 1;
                pred[grafo[s][i]] = s;
                queue.push_back(grafo[s][i]);

                //Há um caminho entre o andar inicial e o objetivo.
                if(grafo[s][i] == meta)
                    return true;
            }
        }
    }

    return false;
}

void solve(int s, int dest, int v){
    vector<int> pred(v, -1), dist(v, INT_MAX);
 
    if(!bfs(s, v, dest, dist, pred)) {
        cout << "use the stairs\n";
        return;
    }

    // Distância do andar de inicio e o objetivo.
    cout << dist[dest] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int andares, inicio, meta, cima, baixo;

    cin >> andares >> inicio >> meta >> cima >> baixo;

    for(int i = 1; i <= andares; ++i){
        if(i + cima <= andares){
            grafo[i].push_back(i + cima);
        }

        if(i - baixo >= 1){
            grafo[i].push_back(i - baixo);
        }
    }

    if(inicio == meta)
        cout << 0 << '\n';
    else
        solve(inicio, meta, andares+1);



    return 0;
}
