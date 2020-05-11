//Questão 3068 - Meteoros - URI Online Judge
#include <iostream>

using namespace std; 

int main(){
    int n, x1, y1, x2, y2, m1, m2, testes = 1, meteoritos;

    while(true){
        cin >> x1 >> y1 >> x2 >> y2;
        //Caso todos sejam zero
        if(!x1 && !x2 && !y1 && !y2)
            break;

        //Zera a quantidade de meteoritos que atingiram a fazenda.
        meteoritos = 0;
        cout << "Teste" << endl;
        cout << testes << endl;
        cin >> n;
        while(n > 0){
            cin >> m1 >> m2; //(m1, m2) - Coordenada do meteorito
            //Caso esteja dentro dos limites da fazenda.
            if(m1 >= x1 && m1 <= x2){
                if(m2 <= y1 && m2 >= y2)
                    meteoritos++;
            }
            n--;
        }
        cout << meteoritos << endl;

        testes++;
    }
    return 0;
}