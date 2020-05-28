//Questão 1630 - Estacas - URI Online Judge
#include <iostream>

using namespace std;

int mdc(int x, int y){
    int resto = x % y;

    while(resto != 0){
        x = y;
        y = resto;
        resto = x % y;
    }

    return y;
}

int main(){
    int x, y, quantidade, aux, divisorcomum;

    while(cin >> x >> y){
        //Em um terreno quadrado, 4 estacas, uma em cada extremo, basta!
        if(x == y)
            cout << "4" << endl;
        else{
            //Garantindo que X seja maior que Y.
            if(x > y){
                aux = x;
                x = y;
                y = aux;
            }

            //Caso não seja um quadrado, divide as estacas com um intervalo igual ao mdc entre x e y.
            divisorcomum = mdc(x, y);
            cout << 2*(x / divisorcomum) + 2*(y / divisorcomum) << endl;
        }
    }

    return 0;
}