//Problema 2344 - Notas da Prova - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    if(n == 0)
        cout << "E\n";
    else if(n <= 35)
        cout << "D\n";
    else if(n <= 60)
        cout << "C\n";
    else if(n <= 85)
        cout << "B\n";
    else
        cout << "A\n";

    return 0;
}