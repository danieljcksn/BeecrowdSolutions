// Problema 3099 - O Problema do 7 x 1 | URI Online Judge
// Algoritmo encontrado em: https://www.geeksforgeeks.org/digit-dp-introduction/?ref=lbp
// Dados dois inteiros a e b. A tarefa é imprimir a soma de todos 
// os dígitos que aparecem nos inteiros no intervalo [a, b]
#include "bits/stdc++.h" 
using namespace std; 

typedef unsigned long long int ull;
// Memorização para os resultados 
ull dp[20][180][2]; 
  
// Armazena os dígitos de x em um vector digit
void getDigits(ull x, vector <int> &digit){ 
    while(x){ 
        digit.push_back(x%10); 
        x /= 10; 
    } 
} 
  
// Retorna a soma dos dígitos de 1 até o inteiro
// que está armazenado no vector Digit.
ull digitSum(int idx, ull sum, int tight, vector<int>&digit){ 
    // Caso base
    if (idx == -1) 
       return sum; 
    
    // Checando se esse state foi calculado
    if (dp[idx][sum][tight] != -1 and tight != 1) 
        return dp[idx][sum][tight]; 
  
    long long ret = 0; 
    
    // Calculando o valor do intervalo
    int k = (tight)? digit[idx] : 9; 
  
    for(int i = 0; i <= k ; i++){ 
        // Calculando o valor de newTight para a próxima iteração (state)
        int newTight = (digit[idx] == i)? tight : 0; 

        // Se o dígito i for igual a 1 ou 7
        if(i == 7 || i == 1)
            // Buscando resposta da próxima iteração (state)
            ret += digitSum(idx-1, sum+1, newTight, digit); 
        else
            // Buscando resposta da próxima iteração (state)
            ret += digitSum(idx-1, sum, newTight, digit); 
    } 
  
    if (!tight) 
      dp[idx][sum][tight] = ret; 
  
    return ret; 
} 


// Retorna a soma dos dígitos dos inteiros no intervalo [1, a] 
ull rangeDigitSum(unsigned long long int a){ 
    // Inicializando a tabela de memorização com -1
    memset(dp, -1, sizeof(dp)); 
    
    // Armazenando os dígitos de a-f em um vector digit
    // storing digits of a in digit vector 
    vector<int> digit; 
    getDigits(a, digit); 
 
    long long ans1 = digitSum(digit.size(), 0, 1, digit); 
  
    return ans1;
} 
  
int main(){ 
    unsigned long long a;

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    cin >> a;
    cout << rangeDigitSum(a) << endl; 
    return 0; 
} 
