#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        string a;
        getline(cin, a);

        if(a[0] == '*')
            break;
        
        char c = toupper(a[0]);

        bool ans = true;
        for(int i = 1; i < a.size(); ++i){
            if(a[i] == ' ' && toupper(a[i+1]) != c){
                ans = false;
                break;
            }
        }

        ans?cout << "Y\n" : cout << "N\n";
    }
    return 0;
}
