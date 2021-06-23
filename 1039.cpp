#include <bits/stdc++.h>
 
using namespace std;


bool isCircleInside(int x1, int y1, int x2, int y2, int r1, int r2){
    double distSq = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

    //O circulo de centro (x2, y2) está dentro do círculo maior, mas
    //toca a sua circunferência.
    if(distSq + r2 == r1)
        return true;
    //Circulo de centro (x2, y2) está completamente dentro do primeiro.
    else if(distSq + r2 < r1)
        return true;
    //Circulo de centro (x2, y2) não está dentro do primeiro.
    else
        return false;
}

int main(){
    int r1, x1, y1, r2, x2, y2;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
        isCircleInside(x1, y1, x2, y2, r1, r2)? cout << "RICO\n":cout<<"MORTO\n";


    return 0;
}
