#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    string a;
    vector<string> ans;

    //Indicará se ocorreu uma tag de abertura <body>.
    bool flag = false;
    while(getline(cin, a)){
        string x  = "";
        for(int i = 0; i < a.size(); ++i){
            if(a[i] != ' ' && a[i] != '\n' && a[i] != '\0')
                x += a[i];
        }   
        if(flag && x != "</body>")
            ans.emplace_back(a);
        else{
            if(x == "<body>")
                flag = true;
            else if(x == "</body>")
                flag = false;
        }
    }

    for(auto c:ans)
        cout << c << '\n';

    return 0;
}
