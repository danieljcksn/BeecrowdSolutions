#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, cont, b;

    a = cont = 0;
    string s;
    while(getline(cin, s)){
        cin >> b;
        cin.ignore();
        a += b;
        cont++;
    }

    printf("%.1lf\n", double(a) / double(cont));
    return 0;
}
