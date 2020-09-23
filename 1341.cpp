// Problema 1341 - Crianças em uma Grade | URI Online Judge
// Algoritmo da LCS extraído de https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/
#include "bits/stdc++.h" 
using namespace std; 

int max(int a, int b);  
  
/* Retorna o tamanho da menor subsequência comum entre as strings X e Y */
int lcs(string X, string Y, int m, int n ){  
    int L[m + 1][n + 1];  
    int i, j;  
      
    /* Passos para a construção da matriz de memorização L[m+1][n+1]
       da forma bottom-up. Note que L[i][j] contém o tamanho da LCS (longest commom subsequence) das strings
       X[0..i-1] e Y[0..i-1] */
    for (i = 0; i <= m; i++){  
        for (j = 0; j <= n; j++){  
            if (i == 0 || j == 0)  
                L[i][j] = 0;  

            else if (X[i - 1] == Y[j - 1])  
                L[i][j] = L[i - 1][j - 1] + 1;  

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    /* L[m][n] contém o tamanho da LCS para as strings X[0..n-1] e Y[0..m-1] */
    return L[m][n];  
}  
  
/* Função utilitária para retornar o maior entre dois inteiros */
int max(int a, int b){  
    return (a > b)? a : b;  
}  



// Função utilitária que retorna uma string com a sequencia de passos na grade.
string criaSequencia(vector<string> grade){
    int i, n, x, y, linhaAtual, colunaAtual, msc;
    string linha, passos, result = "";

 
    
    //N passos, iniciando na posição x, y
    cin >> n >> x >> y;

    //Retira o Runtime Error
    if(n != 0)
        //Lendo os passos
        cin >> passos;


    result += grade[x-1][y-1]; 

    //Utilitários para gravar a posição atual na matriz.
    linhaAtual = x-1;
    colunaAtual = y-1;
    for(i = 0; i < n; i++){
        switch(passos[i]){
            case 'N':
                linhaAtual--;
                result += grade[linhaAtual][colunaAtual];
                break; 
            case 'S':
                linhaAtual++;
                result += grade[linhaAtual][colunaAtual];
                break; 
            case 'E':
                colunaAtual++;
                result += grade[linhaAtual][colunaAtual];
                break; 
            case 'W':
                colunaAtual--;
                result += grade[linhaAtual][colunaAtual];
                break; 

            default: 
                break;
        }
    }

    return result;
}

int main(){ 
    int t, h, w, i, msc, cases = 1;
    string linha, sA, sB;


    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> t;
    while(t--){
        //Dimensões da matriz grade[h][w]
        cin >> h >> w;

        //Grade armazenará a matriz com as posições e valores de cada casa.
        vector<string> grade;
        for(i = 0; i < h; i++){
            cin >> linha;
            grade.push_back(linha);
        }

        sA = criaSequencia(grade);
        sB = criaSequencia(grade);

        msc = lcs(sA, sB, sA.size(), sB.size());
        cout << "Case " << cases << ": ";
        cout << sA.size() - msc << ' ' << sB.size() - msc << '\n';
        cases++;
    }

    return 0; 
} 
