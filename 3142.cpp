#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    string a;

    while(cin >> a){
        if(a.size() > 3)
            cout << "Essa coluna nao existe Tobias!\n";
        else if(a.size() == 1){
            char c = 'A';

            int cont = 1;
            while(c != a[0]){
                c++;
                cont++;
            }

            cout << cont << '\n';
        }else if(a.size() == 2){
            char c = 'A';

            int cont = 1;
            while(c != a[1]){
                c++;
                cont++;
            }   

            int cont1 = 1;
            c = 'A';
            while(c != a[0]){
                c++;
                cont1++;
            }   

            cout << cont + (cont1 * 26) << '\n';
        }else if(a.size() == 3){
            if(a > "XFD")
                cout << "Essa coluna nao existe Tobias!\n";
            else{
                char c = 'A';

                int cont = 1;
                while(c != a[2]){
                    c++;
                    cont++;
                }   

                c = 'A';
                int cont1 = 1;
                while(c != a[1]){
                    c++;
                    cont1++;
                }   
                cont1 *= 26;

                c = 'A';
                int cont2 = 1;
                while(c != a[0]){
                    c++;
                    cont2++;
                }   
                cont2 *= 26*26;

                cout << cont + cont1 + cont2 << '\n';
            }
        }
    }

    return 0;
}
