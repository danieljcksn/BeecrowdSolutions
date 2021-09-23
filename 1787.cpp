#include <bits/stdc++.h>

using namespace std;

bool isPrime(int a){
    if(a < 2)
        return false;

    for(int i = 2; i <= sqrt(a); ++i)
        if(a % i == 0)
            return false;

    return true;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, ui, ri, li, x, y, z;

    while(true){
        cin >> n;
        if(!n)
            break;

        ui = ri = li = 0;
        while(n--){
            cin >> x >> y >> z;

            int maior = max(x, y);
            maior = max(maior, z);

            if((x & (x - 1)) == 0){
                ui++;

                if(x == maior)
                    ui++;
            }

            if((y & (y - 1)) == 0){
                ri++;

                if(y == maior)
                    ri++;
            }

            if((z & (z - 1)) == 0){
                li++;

                if(z == maior)
                    li++;
            }
        }

        int winner = max(ui, ri);
        winner = max(winner, li);

        if(ui == winner){
            if(ui == ri || ui == li)
                cout << "URI\n";
            else
                cout << "Uilton\n";
        }else if(ri == winner){
            if(ri == ui || ri == li)
                cout << "URI\n";
            else
                cout << "Rita\n";
        }else{
            if(li == ui || ri == li)
                cout << "URI\n";
            else
                cout << "Ingred\n";
        }

    }

    return 0;
}
