////Questão 3004 - Envelopes - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, a, b, c, d, aux;

    cin >> n;
    while(n > 0){
        cin >> a >> b >> c >> d;

        //Garantindo que os maiores valores estejam em 'a' e 'c', respectivamente
        if(a < b){
            aux = a;
            a = b;
            b = aux;
        }
        if(c < d){
            aux = c;
            c = d;
            d = aux;
        }

        if(a < c && b < d)
            cout << "S" << endl;
        else
            cout << "N" << endl;
        n--;
    }

    return 0;
}
