#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, l1, l2, l3;

    while(cin >> m >> l1 >> l2 >> l3){
        int mmc = (l1 * l2) / __gcd(l1, l2);
        mmc = (mmc * l3) / __gcd(mmc, l3);

        cout << mmc - m << '\n';
    }




    return 0;
}
