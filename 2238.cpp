#include <bits/stdc++.h> 

using namespace std;

vector<int> c_divisors(int c){
    vector<int> divisors;
    for(int i = 1; i <= sqrt(c); ++i){
        if (c % i == 0){
            if(c/i == i)
                divisors.push_back(i);
            else{
                divisors.push_back(i);
                divisors.push_back(c/i);
            }
        }
    }

    return divisors;
}

bool verify(int n, int a, int b, int d){
    return (n % a == 0 && n % b != 0 && d % n != 0);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    vector<int> divisors = c_divisors(c);

    sort(divisors.begin(), divisors.end());
    int ans = -1;
    for(int i = 0; i < divisors.size(); ++i){
        if(verify(divisors[i], a, b, d)){
            ans = divisors[i];
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}
