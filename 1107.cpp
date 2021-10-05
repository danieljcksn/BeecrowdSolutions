#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

int main(){_
    while(true){
        int a, c;
        cin >> a >> c;

        if(!a && !c) break;

        int arr[c+2];


        int ans = 0;
        arr[c+1] = a;

        for(int i = 1; i <= c; ++i)
            cin >> arr[i];

        for(int i = 1; i <= c; ++i)
            if(arr[i] < arr[i+1])
                ans += arr[i+1] - arr[i];

        cout << ans << '\n';
    }
    return 0;
}
