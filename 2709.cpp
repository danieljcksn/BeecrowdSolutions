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

    int m, n;
    string ans1 = "You’re a coastal aircraft, Robbie, a large silver aircraft.\n";
    string ans2 = "Bad boy! I’ll hit you.\n";
  
    while(cin >> m){
        vector<int> coins(m+1);

        coins[0] = -1;
        for(int i = 1; i <= m; ++i)
            cin >> coins[i];
    
        cin >> n;

        int sum = 0;

        for(int i = 0; i*n < m; ++i)
            sum += coins[m-(n*i)];

        if(isPrime(sum))
            cout << ans1;
        else
            cout << ans2;
    }


    return 0;
}
