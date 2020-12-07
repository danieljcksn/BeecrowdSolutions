#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    vector<double> peso(4);

    cin >> peso[0] >> peso[1] >> peso[2] >> peso[3];

    sort(peso.begin(), peso.end());

    bool ans = false;

    if(abs(peso[3] - (peso[0] + peso[1] + peso[2])) < 1e-9)
        ans = true;
    if(abs((peso[0] + peso[1]) - (peso[2] + peso[3])) < 1e-9)
        ans = true;
    if(abs((peso[0] + peso[2]) - (peso[1] + peso[3])) < 1e-9)
        ans = true;
    if(abs((peso[0] + peso[3]) - (peso[1] + peso[2])) < 1e-9)
        ans = true;

    ans ? cout << "YES\n" : cout << "NO\n";


    return 0;
}
