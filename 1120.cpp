#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    char digito;
    string original;

    while(true){
        cin >> digito >> original;

        if(digito == '0' && original == "0")
            break;

        for(int i = 0; i < original.size(); ++i){
            if(original[i] == digito){
                original.erase(original.begin() + i);
                i--;
            }
        }

        for(int i = 0; i < original.size(); ++i){
            if(original[i] != '0')
                break;

            original.erase(original.begin() + i);
            i--;
        }

        if(original.size() == 0)
            cout << 0 << '\n';
        else{
            cout << original << '\n';
        }
    }

    return 0;
}
