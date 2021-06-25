#include <bits/stdc++.h>

using namespace std;

#define pb push_back


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

    int trem = 0, c, n;

    cin >> c >> n;

    bool flag = true;
    int sairam, entraram, ficaram;
    for(int i = 0; i < n; ++i){
        cin >> sairam >> entraram >> ficaram;

        //Se saírem mais pessoas do que a quantidade atual do trem.
        if(sairam > trem)
            flag = false;        
        trem -= sairam;

        //Se o trem exceder a capacidade máxima
        if((entraram + trem) > c)
            flag = false;
        trem += entraram;

        //Os passageiros devem esperar apenas se o trem estiver em sua capacidade máxima.
        if(ficaram){
            if(trem != c)
                flag = false;
        }

    }
    
    //Verifica se o trem está vazio na última estação.
    flag && !trem ? cout << "possible\n":cout<<"impossible\n";

    return 0;
}
