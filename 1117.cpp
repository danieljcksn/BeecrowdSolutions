#include <bits/stdc++.h>

using namespace std;

int main(){
    double score1, score2;
    bool flag = false;
    while(true){
        double verify;

        cin >> verify;

        if(verify >= 0.0 && verify <= 10.0){
            if(!flag){
                flag = true;
                score1 = verify;
            }else{
                score2 = verify;
                break;
            }
        }else
            cout << "nota invalida\n";
    }

    printf("media = %.2lf\n", (score1 + score2) / 2);

    return 0;
}
