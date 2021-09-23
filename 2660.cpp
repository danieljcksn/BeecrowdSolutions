#include <bits/stdc++.h> 

using namespace std;
typedef unsigned long long int ull;

ull gcd(ull a, ull b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ull lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

ull lcm_array(vector<ull> ciclos){
    ull mmc = lcm(ciclos[0], ciclos[1]);

    for(int i = 2; i < ciclos.size(); ++i)
        mmc = lcm(mmc, ciclos[i]);

    return mmc;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ull n, l;

    cin >> n >> l;

    vector<ull> ciclos(n);

    for(ull i = 0; i < n; ++i)
        cin >> ciclos[i];

    ull mmc = lcm_array(ciclos);

    pair<ull, ull> greater = {0ULL, 0ULL};
    
    ull current_mmc;
    for(ull i = 1; i <= l; ++i){
        current_mmc = lcm(mmc, i);

        if(current_mmc <= l)
            if(current_mmc > greater.first)
                greater = {current_mmc, i};
    }

    cout << greater.second << '\n';


    return 0;
}
