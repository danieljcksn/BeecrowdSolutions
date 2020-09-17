// Problema 3141 - Dúvida Etária | URI Online Judge
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
    string n, atual, nascimento, x ="";
        
    //Para ler nomes que contenham espaços.
    getline(cin, n);
    cin >> atual >> nascimento;

    int dAtual, mAtual, aAtual, op;
    //Dia atual -> int
    x += atual[0];
    x += atual[1];
    sscanf(x.c_str(), "%d", &dAtual);
    x = "";

    //Mês atual -> int
    x += atual[3];
    x += atual[4];
    sscanf(x.c_str(), "%d", &mAtual);
    x = "";

    //Ano atual -> int
    x += atual[6];
    x += atual[7];
    x += atual[8];
    x += atual[9];
    sscanf(x.c_str(), "%d", &aAtual);
    x = "";

    int dNasc, mNasc, aNasc;
    //Dia nascimento -> int
    x += nascimento[0];
    x += nascimento[1];
    sscanf(x.c_str(), "%d", &dNasc);
    x = "";

    //Mês nascimento -> int
    x += nascimento[3];
    x += nascimento[4];
    sscanf(x.c_str(), "%d", &mNasc);
    x = "";

    //Ano nascimento -> int
    x += nascimento[6];
    x += nascimento[7];
    x += nascimento[8];
    x += nascimento[9];
    sscanf(x.c_str(), "%d", &aNasc);
    x = "";

    if(mNasc > mAtual)
        op = 1;
    else if(mNasc == mAtual){
        if(dNasc > dAtual)
            op = 1;
        else if(dNasc < dAtual)
            op = 2;
        else
            op = 3;
    }else
        op = 2;

    switch(op){
        case 1:
            cout << "Voce tem " << aAtual - aNasc - 1 << " anos " << n << ".\n";
            break;
        
        case 2:
            cout << "Voce tem " << aAtual - aNasc << " anos " << n << ".\n";
            break;

        case 3:
            cout << "Feliz aniversario!\nVoce tem " << aAtual - aNasc << " anos " << n << ".\n";
            break;
    }

    return 0;
}
