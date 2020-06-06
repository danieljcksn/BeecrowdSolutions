//Questão 1582 - O Teorema de Pitágoras - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int calculaMdc(int a, int b){
    int resto = a % b;

    while(resto != 0){
        a = b;
        b = resto;
        resto = a % b;
    }

    return b;
}

int main(){
    int x, y, z, mdc, a, b, c, aux;


    while(cin >> x >> y >> z){
        //Garantindo que x seja a medida da hipotenusa.
        if(x < y){
            aux = x;
            x = y;
            y = aux;    
        }
        if(x < z){
            aux = x;
            x = z;
            z = aux;     
        }
        //Se o quadrado da hotenusa for a soma dos quadrados dos catetos
        a = pow(x, 2);
        b = pow(y, 2);
        c = pow(z, 2);
        if(a == (b+c)){
            //mdc(a, b, c) = mdc(mdc(a, b), c)
            mdc = calculaMdc(x, y);
            mdc = calculaMdc(mdc, z);

            if(mdc == 1)
                cout << "tripla pitagorica primitiva\n";
            else
                cout << "tripla pitagorica\n";  
        }else
            cout << "tripla\n";
    }


    return 0;
}