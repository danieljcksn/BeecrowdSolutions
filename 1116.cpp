#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        int x, y;

        cin >> x >> y;
        if(y == 0)
            cout << "divisao impossivel\n";
        else
            printf("%.1lf\n", (double)x / (double)y);

    }

    return 0;
}
