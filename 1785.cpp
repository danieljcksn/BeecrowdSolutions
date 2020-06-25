//Questão 1785 - Kaprekar - URI Online Judge
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int contaDigitos(int x){
    int cont = 0;

    if(x == 0)
        return 1;

    while(x > 0){
        cont++;
        x /= 10;
    }

    return cont;
}

//Verifica se há, pelo menos, dois dígitos distintos entre si.
bool verificaDistintos(int X){
    int digito, primeiro = X % 10;

    //Para 1, 2, 3, 4, 5, 6, 7, 8, 9 e 10 a resposta será que os números são distintos.
    if(X < 1000)
        return true;

    X /= 10;
    while(X > 0){
        digito = X % 10;
        if(digito != primeiro)
            return true;
        X /= 10;
    }
    return false;
}

int maior_numero_com_digitos_de(vector<int> Num){
    int maiorNumero = 0;

    //Ordena decrescentemente. Por exemplo: 2546 se tornará 6542 - maior número com os dígitos do número original.
    sort(Num.begin(), Num.end(), greater<int>());
    
    maiorNumero += Num[0] * 1000;
    maiorNumero += Num[1] * 100;
    maiorNumero += Num[2] * 10;
    maiorNumero += Num[3];
    
    return maiorNumero;
}

int menor_numero_com_digitos_de(vector<int> Num){
    int menorNumero = 0;

    //Ordena crescentemente. Por exemplo: 6542 se tornará 2456 - maior número com os dígitos do número original.
    sort(Num.begin(), Num.end());

    menorNumero += Num[0] * 1000;
    menorNumero += Num[1] * 100;
    menorNumero += Num[2] * 10;
    menorNumero += Num[3];

    return menorNumero;
}

int krapekar(int X){
    int cnt = 0, i, aux, maior, menor;
    vector<int> Digitos;

    bool distintos = verificaDistintos(X);
    //Se não existirem dígitos distintos, sera um loop infinito.
    if(distintos){
        while(X != 6174){
            aux = X;
            while(aux > 0){
                Digitos.push_back(aux % 10);
                aux /= 10;
            }
            if(contaDigitos(X) < 4){
                for(i = 0; i < 4 - contaDigitos(X); i++)
                    Digitos.push_back(0);
            }

            maior = maior_numero_com_digitos_de(Digitos);
            menor = menor_numero_com_digitos_de(Digitos);
            X = maior - menor;
            if(X == 0)
                return -1;

            Digitos.clear();
            cnt = cnt + 1;
        }
    }else
        cnt = -1;
    
    return cnt;
}

int main(){
    int t, x, casos = 1;

    cin >> t;
    while(t--){
        cin >> x;
        if(x == 0)
            cout << "Caso #" << casos <<": -1\n";
        else
            cout << "Caso #" << casos <<": " << krapekar(x) << '\n';
        
        casos++;
    }

    return 0;
}