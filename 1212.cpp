//Problema 1212 - Aritmética Primária - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int a, b, carry, digA, digB;
    bool flag;

    while(true){
        cin >> a >> b;

        if(!a && !b)
            break;

        carry = 0;
        flag = false;

        if(a < b)
            swap(a, b);

        while(a > 0 && b > 0){
            digA = a % 10;
            digB = b % 10;

            if((digA + digB + flag) >= 10){
                carry++;
                flag = true;
            }else
                flag = false;
            a /= 10;
            b /= 10;
        }


        //B com certeza chegou a zero, pois a > b.
        if(flag){
            while(a % 10 == 9){
                carry++;
                a /= 10;
            }
        }
        if(!carry)
            cout << "No carry operation.\n";
        else if(carry == 1)
            cout << "1 carry operation.\n";
        else
            cout << carry << " carry operations.\n";
    }


    return 0;
}