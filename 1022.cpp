/* URI Online Judge | 1022
TDA Racional
Recebendo 5% de WA '-'
*/
#include <iostream>

using namespace std;

int calculaMDC(int x, int y){
    int resto;

    resto = x % y;
    while(resto){
        x = y;
        y = resto;
        resto = x % y;
    }

    return y;
}

int main(void){
    int n, N1, N2, D1, D2, num, den, mdc;
    char op, ignore;
    cin >> n;
    
    while(n--){
        cin >> N1 >> ignore >> D1 >> op >> N2 >> ignore >> D2;

        switch(op){
            case '+':
                num = N1*D2 + N2*D1;
                den = D1*D2;
                break;
            case '-':
                num = N1*D2 - N2*D1;
                den = D1*D2;
                break;
            case '*':
                num = N1*D2;
                den = D1*D2;
                break;
            case '/':
                num = N1*D2;
                den = N2*D1;
                break;
            default: 
                break;
        }

        cout << num << "/" << den << " = ";

        mdc = calculaMDC(num, den);

        if(mdc < 0)
            cout << -(num / mdc) << "/" << -(den / mdc) << endl;
        else
            cout << num / mdc << "/" << den / mdc << endl;
    }

    return 0;
}