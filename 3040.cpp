//Questão 3040 - A Árvore de Natal - URI Online Judge
#include <iostream>

using namespace std;

int main(void){
    int n, a, d, g;
    bool flag;
    cin >> n;
    while(n > 0){
        cin >> a >> d >> g;
        flag = false;
        if(a >= 200 && a <= 300){
            if(d >= 50){
                if(g >= 150)
                    flag = true;
            }
        }

        if(flag == true)
            cout << "Sim" << endl;
        else
            cout << "Nao" << endl;
        
        n--;
    }

    return 0;
}
