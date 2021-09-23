#include <bits/stdc++.h>

using namespace std;

int main(){
    int alc, gas, diesel;

    alc = gas = diesel = 0;
    
    bool flag = true;
    while(flag){
        int op;
        cin >> op;

        switch(op){
            case 1:
                alc++;
                break;
            case 2:
                gas++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                flag = false;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alc, gas, diesel);
    return 0;
}
