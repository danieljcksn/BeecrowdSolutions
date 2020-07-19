//Questão 1286 - Motoboy - URI Online Judge
#include <iostream>

using namespace std;


int mochilaBinaria(int pizzas, int pizzap[], int tempo[], int n){
    //Caso base
    if(n == 0 || pizzas == 0)
        return 0;

    //Se a quantidade de pizzas do nº pedido é maior que
    //o número máximo de pizzas, então este pedido não pode ser incluído
    //na solução ótima.
    if(pizzap[n-1] > pizzas)
        return mochilaBinaria(pizzas, pizzap, tempo, n-1);

    //Retorna o máximo dos dois casos:
    //1 - O nº pedido foi incluso
    //2 - O nº pedido não foi incluso
    else
        return max(tempo[n-1] + mochilaBinaria(pizzas - pizzap[n-1], pizzap, tempo, n-1), mochilaBinaria(pizzas, pizzap, tempo, n-1));
}

int main(){
    int n, pizzas, tempo, qt, min;

    while(true){
        cin >> n;

        if(!n)
            break;
        
        cin >> pizzas;

        int tempoTotal[n], qtPizzas[n];
        for(int i = 0; i < n; i++)
            cin >> tempoTotal[i] >> qtPizzas[i];

        min = mochilaBinaria(pizzas, qtPizzas, tempoTotal, n);



        cout << min << " min.\n";
    }
}