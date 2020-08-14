//Problema 3102 - Kikoho - URI Online Judge
#include <bits/stdc++.h>

using namespace std;

double dist(int x1, int y1, int x2, int y2){
    return sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
}

int main(){
    int n;
    cin >> n;

    int x1, y1, x2, y2, x3, y3;
    double a, b, c, p, area;

    /*
    Teorema de Herão: 
    S = sqrt(p.(p-a).(p-b).(p-c))
    Onde:
    -> S: área do triângulo
    -> p: semiperímetro
    -> a, b e c: lados do triângulo
    Sendo o perímetro do triângulo a soma de todos os lados da figura, o semiperímetro representa a metade do perímetro:
    -> p = (a + b + c) / 2
    */
    while(n--){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        //Determina os lados do triângulo
        a = dist(x1, y1, x2, y2);
        b = dist(x2, y2, x3, y3);
        c = dist(x3, y3, x1, y1);

        //Calcula o semiperímetro
        p = (a + b + c) / 2;
        area = sqrt(p * (p-a) * (p-b) * (p-c));

        cout << fixed << setprecision(3) << area << endl;
    }


    return 0;
}