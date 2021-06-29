#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int c;

    cin >> c;

    int p;
    int pR, pB, pG;
    char a, b;

    while(c--){
        cin >> p;

        pR = pB = pG = 0;

        while(p--){
            cin >> a >> b;

            if(a == 'B'){
                if(b == 'R')
                    pB += 2;
                else
                    pB++;
            }else if(a == 'R'){
                if(b == 'G')
                    pR += 2;
                else
                    pR++;
            }else{
                if(b == 'B')
                    pG += 2;
                else
                    pG++;
            }

        }
        if(pB == pR && pB == pG)
            cout << "trempate\n";
        else if(pB > pR && pB > pG)
            cout << "blue\n";
        else if(pG > pR && pG > pB)
            cout << "green\n";
        else if(pR > pG && pR > pB)
            cout << "red\n";
        else 
            cout << "empate\n";
    }


    return 0;
}
