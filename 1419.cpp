#include <bits/stdc++.h>

using namespace std;

int main(){

    while(true){
        int r;
        cin >> r;

        if(!r) break;
        int mark[r], leti[r];

        for(int i=0; i<r; ++i) cin >> mark[i];
        for(int i=0; i<r; ++i) cin >> leti[i];
        
        int pmark, pleti;
        pmark = pleti = 0;

        pair<int, int> prevM, prevL;
        prevM = prevL = {-1, -1};

        bool flag = false;
        for(int i=0; i<r; ++i){
            pleti += leti[i];
            pmark += mark[i];

            if(mark[i] != prevM.first){
                prevM = {mark[i], 1};
            }else{
                prevM.second++;
            }

            if(leti[i] != prevL.first){
                prevL = {leti[i], 1};
            }else{
                prevL.second++;
            }

            if(!flag){
                if(prevM.second == 3){
                    flag = true;
                    if(prevL.second < 3){
                        pmark += 30;
                    }
                    prevM = {-1, -1};
                }
                else if(prevL.second == 3){
                    flag = true;
                    if(prevM.second < 3){
                        pleti += 30;
                    }
                    prevL = {-1, -1};
                }
            }          
        }

        if(pleti == pmark) cout << "T\n";
        else if(pleti > pmark) cout << "L\n";
        else cout << "M\n";
    }

    return 0;
}
