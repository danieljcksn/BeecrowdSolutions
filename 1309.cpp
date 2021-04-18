#include <bits/stdc++.h>

using namespace std;


typedef unsigned long long int ull;

string removeCharacter(string s, int j){
    string newS = "";

    for(int i = j; i < s.size(); ++i)
        newS += s[i];

    return newS;
}

string tree(string ans, string dol, int n){
    int j;
    for(int i = 0; i < dol.size(); i += j){
        for(j = 0; j < 3; j++){
            ans += dol[i + j];
        }

        if(i + j < dol.size())
            ans += ",";
    }

    return ans;
}

void solve(string dol, string cents){
    string ans = "$";   

    if(cents.size() == 1){
        cents += cents[0];
        cents[0] = '0';
    }

    int j;
    int n = dol.size();
    if(n > 3){
        if(n % 3 == 0)
            ans = tree(ans, dol, n);
        else if(n%3 == 1){
            ans += dol[0];
            ans += ',';
            dol = removeCharacter(dol, 1);
            ans = tree(ans, dol, n);
        }else{
            ans += dol[0];
            ans += dol[1];
            ans += ',';

            dol = removeCharacter(dol, 2);
            ans = tree(ans, dol, n);
        }

        ans += ".";
        ans += cents;
    }else{
        ans += dol;
        ans += ".";
        ans += cents;
    }


    cout << ans << '\n';
}

int main(){
    string dol, cents;

    while(cin >> dol >> cents)
        solve(dol, cents);

    return 0;
}