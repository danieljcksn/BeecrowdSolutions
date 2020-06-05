//Questão 2597 - Xelongão - URI Online Judge

/*
Dica: olhar a sequência de resultados do uDebug e notar o padrão. Não consigo escrever
qual é o padrão e explicar o código kkk.
*/
#include <iostream>

using namespace std;

int main(){
    int c, n, i, pares, max, atual;

    cin >> c;
    while(c--){
        cin >> n;
        
        if(n == 2 || n == 3)
            cout << n-1 << "\n";
        else{
            max = 5;
            atual = 2;
            for(i = 4; i <= n;){
                if(i + max > n)
                    break;
                else{
                    i += max;
                    max += 2;
                    atual++;
                }
            }
            cout << n - atual << endl;
        }
    }

    return 0;
}