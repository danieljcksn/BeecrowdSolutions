// Problema 2404- Reduzindo Detalhes em um Mapa| URI Online Judge
// Algoritmo de Kruskal obtido em https://www.programiz.com/dsa/kruskal-algorithm#c-code
#include <bits/stdc++.h>

using namespace std;
  
#define aresta pair<int, int>

class Grafo{
    private:
        vector<pair<int, aresta>> G;  // grafo
        vector<pair<int, aresta>> T;  // árvore geradora mínima
    int *pai;
    int V;  // número de vértices no grafo
    public:
        Grafo(int V);
    
    //Função que irá adicionar uma aresta u-v com peso w.
    void AdicionaAresta(int u, int v, int w);
    int find_set(int i);
    void union_set(int u, int v);
    int kruskal();
};

Grafo::Grafo(int V){
  pai = new int[V];

  //i 0 1 2 3 4 5
  //pai[i] 0 1 2 3 4 5
  for(int i = 0; i < V; i++)
    pai[i] = i;

  G.clear();
  T.clear();
}

void Grafo::AdicionaAresta(int u, int v, int w){
    G.push_back(make_pair(w, aresta(u, v)));
}

int Grafo::find_set(int i){
    //Se i é o pai de si mesmo.
    if(i == pai[i])
        return i;
    else
        // Se i não é pai de si mesmo
        // i não é o representante do seu set.
        // então recursivamente chamamos Find para o pai de i.
        return find_set(pai[i]);
}

void Grafo::union_set(int u, int v){
    pai[u] = pai[v];
}


//Retorna o peso total da MST
int Grafo::kruskal(){
    int i, uRep, vRep, minST = 0;
    sort(G.begin(), G.end());  // Pesos em ordem crescente.
    for(i = 0; i < G.size(); i++){
        uRep = find_set(G[i].second.first);
        vRep = find_set(G[i].second.second);
        if(uRep != vRep){
            T.push_back(G[i]);  // Adiciona à árvore
            union_set(uRep, vRep);
        }
    }

    //Soma todos os pesos presentes na árvore geradora mínima
    for(i = 0; i < T.size(); i++)
        minST += T[i].first;

    return minST;
}

int main(){
    int n, m, x, y, c, i, minST;

    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    cin >> n >> m;

    // Cria um grafo de n vértices
    Grafo g(m);

    for(i = 0; i < m; i++){
        cin >> x >> y >> c;
        g.AdicionaAresta(x, y, c);
    }

    minST = g.kruskal();

    cout << minST << '\n';
    return 0;
}