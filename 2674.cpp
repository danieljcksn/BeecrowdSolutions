//Questão 2674 - Super Primos: Ativar! - URI Online Judge
#include <iostream>
#include <cmath>

using namespace std;

//Função que verificará se o número é primo
bool verificaPrimo(int x){
    //Números primos começam a partir de 2.
    if(x == 1 || x == 0)
        return false;

    for(int i = 2; i <= sqrt(x); i++)
        if(x % i == 0)
            return false;

    //Caso não encontre nenhum divisor, é primo.
    return true;
}

int main(){
    int num, digito;
    bool flag;

    while(cin >> num){
        //Se for primo, verifica se é super ou um primo normal.
        if(verificaPrimo(num)){
            //Se a flag permanecer verdadeira até o final, o número possui todos dígitos que o compoem primos.
            flag = true;
            while(num > 0){
                //Verifica a primalidade de cada dígito de num.
                digito = num % 10;
                if(!verificaPrimo(digito)){
                    flag = false;
                    break;
                }
                num /= 10;
            }
            if(flag)
                cout << "Super" << endl;
            else
                cout << "Primo" << endl;
            
        }else
            cout << "Nada" << endl;
    }

    return 0;
}