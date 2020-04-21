#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double b, h, area;
    cin >> b >> h;

    area = (b * h) / 2;
    cout << fixed << setprecision(5);

    	
    cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << area << "." << endl;
    return 0;
}