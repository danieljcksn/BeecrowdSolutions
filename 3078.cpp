//Questão 3078 - Só o Ouro - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, b, c, y;
    float delta, x1, x2;

    while(true){
        cin >> n;
        if(n == -1)
            break;
        
        b = n % 257;
        c = n % 193;

        //Calculando o valor de delta
        delta = pow(b, 2) - 4 * c;
        if(delta < 0)
            cout << "So o ouro" << endl;
        else{
            //Calculando as raízes
            x1 = (-b + sqrt(delta)) / 2;
            x2 = (-b - sqrt(delta)) / 2;

            //Não há raízes reais
            if(x1 < 0 && x2 < 0)
                cout << "So o ouro" << endl;
            //Há apenas uma raiz real
            else if((x1 < 0 && x2 == 0) || (x2 < 0 && x1 == 0) || (!x1 && !x2))
                cout << "Bom" << endl;
            //Há duas ou mais  raízes
            else
                cout << "Regular" << endl;            

        }   
    }

    return 0;
}