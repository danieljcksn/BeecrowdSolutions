//Questão 1069 - Diamantes e Areia - URI Online Judge
#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n, i, diamantes;
    string inp;

    cin >> n;
    while(n--){
        cin >> inp;

        queue<char> Q;

        diamantes = 0;
        for(i = 0; i < inp.length(); i++){
            switch(inp[i]){
                //Caso seja caractere de abertura, empilha
                case '<':
                    Q.push('<');
                    break;

                //Caso seja de fechamento, se a pilha não estiver vazia, desempilha e incrementa o numero de diamantes
                case '>':
                    if(!Q.empty()){
                        Q.pop();
                        diamantes++;
                    }
                    break;
                
                default:
                    break;
            }
        }

        cout << diamantes << endl;
    }

    return 0;
}
