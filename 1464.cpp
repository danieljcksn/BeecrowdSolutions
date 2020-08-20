//Problema 1464 - Camadas de Cebola - URI Online Judge

/*
Programa para encontrar a quantidade de envoltórias convexas (uma interna à outra), utilizando o algoritmo
de Jarvis para encontrar a envoltória convexa:
https://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/
*/
#include <bits/stdc++.h> 
using namespace std; 

// Para determinar a orientação da tripla (p, q, r).
// A função retorna os seguintes valoress 
// The function returns following values 
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
    int n, i, j, camadas, x, y;

    // ofstream myfile;
    // myfile.open("results.txt");
    while(true){
        cin >> n;

        if(!n)
            break;

        vector<pair<int, int>> points; 
        stack<pair<int, int>> Hull;
        vector<pair<int, int>>::iterator position;

        for(i = 0; i < n; i++){
            cin >> x >> y;
            points.push_back(make_pair(x, y));
        }

        camadas = 0;
        while(points.size() > 2){
            convexHull(points, points.size(), Hull); 

            camadas++;
            // Enquanto a pilha de resultado não estiver vazia
            while(!Hull.empty()){
                // myfile << "(" << Hull.top().first << ", " << Hull.top().second << ")\n"; 
                // Apaga os pontos que estão na envoltória convexa de points.
                position = find(points.begin(), points.end(), Hull.top());
                if (position != points.end()) // == points.end() means the element was not found
                    points.erase(position);

                Hull.pop();
            } 
            // myfile << "\n--------------------\n";
        }

        //Nº ímpar de camadas: leva pro lab. Caso seja par, não leva.
        if(camadas % 2 != 0){
            // myfile << "Take this onion to the lab!\n";
            cout << "Take this onion to the lab!\n";
        }
        else
            cout << "Do not take this onion to the lab!\n";
            // myfile << "Do not take this onion to the lab!\n";
    }
    //myfile.close();
    return 0; 
} 
