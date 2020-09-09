// Problema 2683 - Espaço do Projeto
// Algoritmo de https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/?ref=lbp 
#include <bits/stdc++.h>

using namespace std;

// Uma estrutura para representar uma aresta com peso no grafo.
class Edge{  
    public: 
    int src, dest, weight;  
};  
  
// Estrutura para representar um grafo conexo, não orientado e pesado.
class Graph{  
    public: 
    // V-> Número de vértices, E-> Número de Arestas
    int V, E;  
    
    // O grafo é representado como um array de arestas.
    // Sendo o grafo não orientado, a aresta que vai de src à dest é também a aresta de dest para src. 
    // Ambas são contadas como apenas uma aresta.
    Edge* edge;  
};  
    
// Cria um grafo com V vértices e E arestas.
Graph* createGraph(int V, int E){  
    Graph* graph = new Graph;  
    graph->V = V;  
    graph->E = E;  
  
    graph->edge = new Edge[E];  
  
    return graph;  
}  
  
// Estrutura para representar um subset para o union-find.
class subset{  
    public: 
    int parent;  
    int rank;  
};  
 
// Função para determinar o set de um elemento i
// (utiliza a técnica de compressão de caminho)
int find(subset subsets[], int i){  
    // Encontra a raiz e a torna pai de i.
    // (compressão de caminho)
    if(subsets[i].parent != i)  
        subsets[i].parent = find(subsets, subsets[i].parent);  
  
    return subsets[i].parent;  
}  
  
// Função que une dois sets de x e y. (Utiliza união por rank)
void Union(subset subsets[], int x, int y){  
    int xroot = find(subsets, x);  
    int yroot = find(subsets, y);  
        
    // Attach smaller rank tree under root of high  
    // rank tree(Union by Rank)  
    if(subsets[xroot].rank < subsets[yroot].rank)  
        subsets[xroot].parent = yroot;  
    else if(subsets[xroot].rank > subsets[yroot].rank)  
        subsets[yroot].parent = xroot;  
  
    // Se os ranks são iguais, torna um deles a raiz e incremente o rank em 1.
    else{  
        subsets[yroot].parent = xroot;  
        subsets[xroot].rank++;  
    }  
}  
  
// Compara duas arestas de acordo com o peso delas. Neste caso, e, a comp1 será utilizada para ordenar crescentemente.  
// Será utilizada em qsort() 
int comp(const void* a, const void* b){  
    Edge* a1 =(Edge*)a;  
    Edge* b1 =(Edge*)b;  
    return a1->weight > b1->weight;  
}  
  
// Para ordenar decrescentemente 
int comp1(const void* a, const void* b){  
    Edge* a1 =(Edge*)a;  
    Edge* b1 =(Edge*)b;  
    return a1->weight < b1->weight;  
}  
  
//Função principal para construir a árvore geradora mínima utilizando o algoritmo de Kruskal.
int KruskalMST(Graph* graph){  
    int totalWeight = 0;
    int V = graph->V;  
    Edge result[V]; // Armazena a árvore geradora mínima
    int e = 0; // Variável de índice para result[]  
    int i = 0; // Variável de índice para as arestas ordenadas.
    
    // Passo 1: Ordena todas as arestas em ordem crescente (ou decrescente) de acordo
    // com o peso que possuem. 
     
    // Aloca memória para criar V subsets. 
    subset *subsets = new subset[( V * sizeof(subset) )];  
  
    // Cria V subsets com um elemento e determina todos como próprios pais.
    for(int v = 0; v < V; ++v){  
        subsets[v].parent = v;  
        subsets[v].rank = 0;  
    }  
    // Número de arestas a serem inseridas na AGM é V-1.
    while(e < V - 1 && i < graph->E){  
        // Passo 2: Seleciona a menor aresta; Incrementa o índice para a próxima iteração.
        Edge next_edge = graph->edge[i++];  
  
        int x = find(subsets, next_edge.src);  
        int y = find(subsets, next_edge.dest);  
  
        // Se incluir essa aresta não forma ciclo, ela faz parte da AGM e incrementa o índice 
        // de result para a próxima aresta.
        if(x != y){  
            result[e++] = next_edge;  
            Union(subsets, x, y);  
        }  
        // Senão, descarta a próxima aresta (next_edge)
    }  

    // Armazena o peso total da árvore geradora mínima (ou máxima, a depender de qual chamada trata-se).
    for(i = 0; i < e; ++i) 
        totalWeight += result[i].weight; 

    return totalWeight;  
} 

int main(){
    int n, u, v, w, minST, maxST;
    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    cin >> n;

    Graph* graph = createGraph(n, n);
    for(int i = 0; i < n; i++){
        cin >> u >> v >> w;
        graph->edge[i].src = u;
        graph->edge[i].dest = v;
        graph->edge[i].weight = w;
    }

    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), comp); 
    // Armazena o custo da Árvore Geradora Mínima
    minST = KruskalMST(graph); 
    
    qsort(graph->edge, graph->E, sizeof(graph->edge[0]), comp1); 
    // Armazena o custo da Árvore Geradora Máxima
    maxST = KruskalMST(graph);  
    
    cout << maxST << endl;
    cout << minST << endl; 
    return 0;
}
