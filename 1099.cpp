#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    while(n--){
        int x, y;


        cin >> x >> y;

        if(x > y)
            swap(x, y);
            
        if((x + 1) & 1)
            x++;
        else
            x += 2;

        int sum = 0;
        while(x < y){
            sum += x;
            x += 2;
        }
        
        cout << sum << '\n';
    }


    return 0;
}
