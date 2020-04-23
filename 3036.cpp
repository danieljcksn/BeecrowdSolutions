////Questão 3036 - Cor da Camisa - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double lambda, v, result, dividendo, divisor, c = 300000000.0;
    cin >> v;

    if(v < 0)
        v = v * -1;
    //Valores necessários para a utilização da fórmula
    dividendo = c - v;
    divisor = c + v;
    result = dividendo / divisor;

    lambda = 700.0 * sqrt(result);
    if(lambda < 400.0)
        cout << "invisivel" << endl;
    else if(lambda < 425.0)
        cout << "violeta" << endl;
    else if(lambda < 445.0)
        cout << "anil" << endl;
    else if(lambda < 500.0)
        cout << "azul" << endl;
    else if(lambda < 575.0)
        cout << "verde" << endl;
    else if(lambda < 585.0)
        cout << "amarelo" << endl;
    else if(lambda < 620.0)
        cout << "laranja" << endl;
    else if(lambda < 750.0)
        cout << "vermelho" << endl;
    else
        cout << "invisivel" << endl;

    return 0;
}
