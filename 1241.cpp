#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;

    cin >> n;

    while(n--){
        string a, b;

        cin >> a >> b;
        
        bool flag = false;

        if(a.size() >= b.size()){
            string comp = "";
            for(int i = a.size() - b.size(); i < a.size(); ++i)
                comp += a[i];

            if(comp == b)
                flag = true;
            else
                flag = false;
        }

        flag ? cout << "encaixa\n" : cout << "nao encaixa\n";
    }

    return 0;
}
