//Questão 3090 - Campo de Batalha - URI Online Judge
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

#define PI 3.14159265358979323846
int main(){
    int comprimento, largura, s, x, y, h, exercito1 = 0, exercito2 = 0;
    double ca, co, angle, angle1;
    cin >> comprimento >> largura >> s;

    /*
    O ângulo adjascente ao ângulo reto do triangulo retangulo correspondente à area superior do campo de batalha é:
    tan(x) = catetoOposto / catetoAdjascente
    arctang(tan(x)) = arctan(catetoOposto / catetoAdjascente)
    x = arctan(catetoOposto / catetoAdjascente)
    */
    co = comprimento;
    ca = largura;
    angle = atan(co / ca);

    /*
    A função atan retorna o valor em radianos do ângulo. Para converter para graus, basta multiplicar por 180 e dividir por pi
    */
    angle = angle * 180 / PI;
    while(s > 0){
        cin >> x >> y >> h;
        co = x;
        ca = y;
        angle1 = atan(co /ca);
        angle1 = angle1 * 180 / PI;
        
        if(angle1 < angle)
            exercito1 += h;
        else
            exercito2 += h;
        
        s--;
    }

    cout << exercito1 << " " << exercito2 << endl;

    return 0;
}