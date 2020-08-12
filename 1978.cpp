//Problema 1798 - Cortando Canos - URI Online Judge
#include <bits/stdc++.h>

using namespace std;
  
int dp[1001][2001];

//Retorna o maior valor que 
//pode ser inserido em uma mochila binária de capacidade W
int mb(int W, int wt[], int val[], int n){ 
    //Caso base: Se o número de elementos agora for 0 
    if(n == 0) 
        return 0; 
    
    //Se o valor já foi calculado, apenas o retorna ao invés de recalcular
    if(dp[n][W] != -1) 
        return dp[n][W]; 
         

    //Se o peso do n-ésimo item for maior
    //que a capacidade W da mochila  mb capacity W, então 
    //esse item não pode ser incluso
    //na solução ótima
    if(wt[n] > W){ 
        //Armazena o valor da chamada da função na tabela antes de retornar o resultado.
        dp[n][W] = mb(W, wt, val, n - 1); 
        return dp[n][W]; 
    }
    //Retorna o máximo de dois casos
    //(1) n-ésimo item incluso (Realiza a chamada novamente para n, pois o mesmo elemento pode ser selecionado mais de uma vez)
    //(2) não incluso
    else{ 
        //Armazena o valor na tabela antes de retornar.
        dp[n][W] = max(val[n] + mb(W - wt[n], wt, val, n), mb(W, wt, val, n - 1)); 
        //Retorna o valor da tabela após armazenar
        return dp[n][W]; 
    } 
}

int main(){
	int pmax, n;
    
    //Lê valores do fluxo de entrada até EOF
	while(cin >> n >> pmax){	
        int pesos[n+1], valores[n+1];
		for (int i = 1 ; i <= n ; ++i)
			cin >> pesos[i] >> valores[i];

        //Preenche a matriz dp com a flag -1, indicando que não há nenhum valor calculado.
		memset(dp, -1, sizeof dp);
		cout << mb(pmax, pesos, valores, n) << '\n';
	}

    return 0;
}
