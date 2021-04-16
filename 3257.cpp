#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> Trees(n);
    for(int i = 0; i < n; ++i){
        cin >> Trees[i];
    }

    sort(Trees.begin(), Trees.end(), greater<int>());

    int most = Trees[0];
    
    for(int i = 1; i < n; ++i){
        most--;
        if(Trees[i] > most)
            most = Trees[i];
    }

    
    cout << most + n + 1 << '\n';

    return 0;
}