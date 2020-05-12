//Questão 1929 - Triângulo - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

bool verifica(int a, int b, int c){
    if(abs(b-c) < a && a < b + c){
        if(abs(a - c) < b && b < a + c){
            if(abs(a - b) < c && c < a + b)
                return true;
        }
    }else
        return false;
}
int main(void){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    /*
    São 4 elementos, tomados 3 a 3. Por tanto, há 4 combinações possíveis
    A - B - C
    A - C - D
    A - B - D
    B - C - D
    */
    if(verifica(a, b, c))   
        cout << "S" << endl;
    else if(verifica(a, c, d))
        cout << "S" << endl;
    else if(verifica(a, b, d))
        cout << "S" << endl;
    else if(verifica(b, c, d))
        cout << "S" << endl;
    else
        cout << "N" << endl;
    

  return 0;
}