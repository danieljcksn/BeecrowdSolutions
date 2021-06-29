#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    string a, b;

    while(true){
        cin >> a >> b;

        if(a == "0" && b == "0")
            break;

        int m = 10, n = 10;
        while(m > 9 || n > 9){
            m = 0;
            n = 0;

            for(int i = 0; i < a.size(); ++i)
                m += a[i] - '0';

            
            for(int i = 0; i < b.size(); ++i)
                n += b[i] - '0';

            a = to_string(m);
            b = to_string(n);
        }

        int ans;
        if(m > n)
            ans = 1;
        else if(n > m)
            ans = 2;
        else
            ans = 0;

        cout << ans << '\n';
    }


    return 0;
}
