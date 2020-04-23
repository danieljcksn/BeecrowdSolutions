//Questão 1198 - O Bravo Guerreiro Hashmat
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    //A variável unsigned long int tem valores de 0 a 4,294,967,295 (2^32 - 1). Porém, o enunciado informa que o número não
        //será maior que 2^32. Ou seja, o máximo será 4,294,967,296,, logo, unsigned long int não é suficiente.
    unsigned long int a, b, diferenca;

    while(cin >> a >> b){
        //Retorna o valor absoluto da diferença
        diferenca = abs(a - b);
        cout << diferenca << endl;
    }


    return 0;
}