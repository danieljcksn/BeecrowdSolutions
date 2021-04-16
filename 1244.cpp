#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define RFOR(i, a, b) for(int i = a; i >= b; --i)

typedef unsigned long long int ull;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;

    cin >> n;

    while(n--){
        string a;

        vector<pair<int ,string>> V;
        while(getline(cin, a)){
            string word = "";
            for (auto x : a){
                if (x == ' '){
                    V.emplace_back(make_pair(word.size(), word));
                    word = "";
                }
                else{
                    word += x;
                }
            }
            V.emplace_back(make_pair(word.size(), word));
            sort(V.rbegin(), V.rend());
            string ans = "";
            for(int i = 0; i < V.size(); ++i){
                ans += V[i].second;
                ans += ' ';
            }
            ans[ans.size()-1] = '\n';
            cout << ans;
            V.clear();
        }
    }

    return 0;
}