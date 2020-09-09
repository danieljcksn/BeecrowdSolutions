// Problema 3005 - Pilhas de Paralelepípedos
#include <bits/stdc++.h>

using namespace std;

//Verifica se a pode ser empilhado sobre b
bool empilha(int a[3], int b[3]){
    if((((a[0] < b[0]) && (a[1] < b[1])) || ((a[0] < b[1]) && (a[1] < b[0]))) || 
       (((a[0] < b[1]) && (a[1] < b[2])) || ((a[0] < b[2]) && (a[1] < b[1]))) || 
       (((a[0] < b[0]) && (a[1] < b[2])) || ((a[0] < b[2]) && (a[1] < b[0]))))
        return true;
    else if((((a[1] < b[0]) && (a[2] < b[1])) || ((a[1] < b[1]) && (a[2] < b[0]))) || 
            (((a[1] < b[1]) && (a[2] < b[2])) || ((a[1] < b[2]) && (a[2] < b[1]))) || 
            (((a[1] < b[0]) && (a[2] < b[2])) || ((a[1] < b[2]) && (a[2] < b[0]))))
        return true;
    else if((((a[0] < b[0]) && (a[2] < b[1])) || ((a[0] < b[1]) && (a[2] < b[0]))) || 
            (((a[0] < b[1]) && (a[2] < b[2])) || ((a[0] < b[2]) && (a[2] < b[1]))) || 
            (((a[0] < b[0]) && (a[2] < b[2])) || ((a[0] < b[2]) && (a[2] < b[0]))))
        return true;
    
    return false;
}

int main(){
    int n, x;
    int p[3];
    int s[3];

    ios_base::sync_with_stdio(false); 
    cin.tie(0);

    cin >> n;
    while(n--){
        for(int i = 0; i < 3; i++)
            cin >> p[i];

        for(int i = 0; i < 3; i++)
            cin >> s[i];

        if(empilha(p, s) && empilha(s, p))
            cout << 3 << endl;
        else if(empilha(p, s))
            cout << 1 << endl;
        else if(empilha(s, p))
            cout << 2 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
