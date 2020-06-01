//Questão 1457 - Oráculo de Alexandria - URI Online Judge
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long int ulli;


ulli kFatorial(int n, int k){
    int i;
    ulli result = n;
    //Result armazenará n * n-ik * n-(i+1)k ...
    i = 1;
    //Loop 'infinito' 
    while(true){
        //Caso a diferença seja inferior a 1, encerra.
        if((n - i*k) < 1)
            break;
        
        result *= n - i*k;
        i++;
    }

    return result;
}


int main(){
    int n, t, k, i, j;
    char c;
    string nStr;
    ulli result;    
    bool flag;

    cin >> t;

    while(t--){
        //Lê o número com os '!' e armazena em uma string.
        cin >> nStr;
        
        k = 0;
        //Loop para contar a quantidade de Ks.
        for(i = nStr.size() - 1; ; i--){
            //Enquanto o caractere indicado por nStr[i] for '!', incrementa a quantidade de Ks. Encerra o laço quando encontra um número.
            if(nStr[i] != '!')
                break;
            else
                k++;
        }
        /*
        Ao final do loop, a variável 'i' possuirá a posição do último dígito do número.
        A função 'erase' elimina todos caracteres a partir da posição i+1. Ou seja, elimina todas exclamações da string
        Restando apenas o número.
        */

        nStr.erase(i + 1);
        //A função stoi converte a string para um número inteiro e armazena na variável n.
        n = stoi(nStr);
        
        //Chama, agora, a função para cálculo do fatorial.
        result = kFatorial(n, k); 
        cout << result << endl;
    }
    return 0;
}