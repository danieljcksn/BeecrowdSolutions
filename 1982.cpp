//Problema 1982 - Novos Computadores | URI Online Judge
#include <bits/stdc++.h>

using namespace std;


double dist(pair<int, int> A, pair<int, int> B){
    return sqrt(pow(B.first - A.first, 2) + pow(B.second - A.second, 2));
}

// Para determinar a orientação da tripla (p, q, r).
// A função retorna os seguintes valores
// 0 --> p, q e r são colineares 
// 1 --> Sentido Horário 
// 2 --> Sentido Antihorário
int orientation(pair<int, int> p, pair<int, int> q, pair<int, int> r){ 
    int val = (q.second - p.second) * (r.first - q.first) - 
              (q.first - p.first) * (r.second - q.second); 
  
    if (val == 0) return 0;  // colineares
    return (val > 0)? 1: 2; // horário ou antihorário 
} 
  
//Algoritmo de Jarvis
void convexHull(vector<pair<int, int>>& points, int n, stack<pair<int, int>>& S){ 
    int i;
    // Devem existir pelo menos 3 pontos.
    if (n < 3) return; 
    
    // Inicializa o vector que possuirá o resultado
    vector<pair<int, int>> hull; 
  
    // Encontra o ponto mais à esquerda
    int l = 0; 
    for (i = 1; i < n; i++) 
        if (points[i].first < points[l].first) 
            l = i; 
    
    // Inicia do ponto mais à esquerda (menor X), e move em sentido horário até
    // encontrar o ponto de início noavmente. Esse loop é executado O(h) vezes,
    // onde H é o número de pontos em Hull ou na saída.
    int p = l, q; 
    do{ 
        // Adiciona o ponto atual à hull
        hull.push_back(points[p]); 

        // Busca por um ponto 'q' tal que a orientação da tripla (p, x, q)
        // seja antihorária para todos pontos 'x'. A ideia é manter
        // o caminho do último ponto visitado em que que esteja posicionado em posição mais antihorárioa. 
        // Se algum ponto 'i' é mais antihorário que q, então atualiza q
        q = (p + 1) % n; 
        
        for (i = 0; i < n; i++){ 
           // Se i é localizado em posição mais antihorária do atual q, atualiza q.
           if (orientation(points[p], points[i], points[q]) == 2) 
               q = i; 
        } 
    
        // Agora q é o ponto mais antihorário em comparação à 'p'.
        // Define p como q para a próxima iteração, assim q será adicionado ao vector hull.
        p = q; 
  
    }while(p != l);  // Enquanto não chegar ao primeiro ponto
  
    // Transfere o resultado para a pilha S.
    for (i = 0; i < hull.size(); i++) 
        S.push(hull[i]); 
} 


int main(){
    int n, x, y, i;
    vector<pair<int, int>> Pontos;
    stack<pair<int, int>> Hull;
    double distancia;

    while(true){
        cin >> n;

        if(!n)
            break;

        for(i = 0; i < n; i++){
            cin >> x >> y;
            Pontos.push_back(make_pair(x, y));
        }

        convexHull(Pontos, Pontos.size(), Hull);
        
        distancia = 0;
        pair<int, int> P = Hull.top();
        pair<int, int> Primeiro = P;
        Hull.pop();

        //Calcula a distância entre os pares de computadores e armazena em "distancia"
        while(!Hull.empty()){
            distancia += dist(P, Hull.top());
            P = Hull.top();
            Hull.pop();
        }

        //Ao final, calcula novamente a distância para o primeiro elemento da envoltória convexa, para fechar o ciclo.
        distancia += dist(Primeiro, P);
        printf("Tera que comprar uma fita de tamanho %.2lf.\n", distancia);
        Pontos.clear();
    }

    return 0;
}