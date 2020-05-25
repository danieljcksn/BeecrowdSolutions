//Questão 1136 - Bingo! - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, b, i, j, k;
    bool flag;

    while(true){
        cin >> n >> b;

        if(!n && !b)
            break;

        int bolas[b];

        for(i = 0; i < b; i++)
            cin >> bolas[i];

        for(k = 0; k <= n; k++){
            flag = false;
            for(i = 0; i < b; i++){
                //Flag indicará se o número foi anunciado ou não
                for(j = 0; j < b; j++){
                    if(abs(bolas[i] - bolas[j]) == k){
                        flag = true;
                        break;
                    }
                }
                if(flag)
                    break;
            }
            if(!flag)
                break;
        }

        if(flag)
            cout << "Y" << endl;
        else
            cout << "N" << endl;   
    }
    return 0;
}