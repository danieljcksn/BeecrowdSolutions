//Problema 1192 - O jogo Matemático de Paula - URI Online Judge
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, result, dig1, dig2;
    string a;

    cin >> n;
    while(n--){
        cin >> a;

        dig1 = a[0] - 48;
        dig2 = a[2] - 48;
        if(dig1 == dig2)
            result = dig2 * dig1;
        else if(a[1] >= 'A' && a[1] <= 'Z') {
            result = dig2 - dig1;
        }else
            result = dig2 + dig1;
        
        cout << result << '\n';
    }

    return 0;
}