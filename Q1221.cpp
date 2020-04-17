#include <iostream>
#include <cmath>

bool verificaPrimo(unsigned long int x){
    int i;
    int raiz = sqrt(x);
    bool flag = true;
    for(i = 2; i <= raiz; i++){
        if(x % i == 0){
            flag = false; 
            break;
        }
    }
    return flag;
}
int main(void){
    int n;
    unsigned long int x, i;

    cin >> n;

    while(n > 0){
        cin >> x;

        if(verificaPrimo(x) == true)
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;

        n--;
    }


    return 0;
}