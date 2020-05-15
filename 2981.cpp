//Questão 2981 - Vamos Fechar - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int c, g;
    
    cin >> c >> g;
    if ((int)(c / g) < 10)
        cout << "A UFSC fecha dia " << (int)(c / g) + 21 << " de setembro." << endl;
    else
        cout << "A UFSC fecha dia " << (int)(c / g) - 9 << " de outubro." << endl;
    
    return 0;
}