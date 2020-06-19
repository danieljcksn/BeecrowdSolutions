//Problema 1829 - Jogo do Maior Número - URI Online Judge
#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n, bas, exp, fat, i, j, rodadas = 1, lucas = 0, pedro = 0;;
    string f, x, y, expressao;
    double fatorial, exponenciacao;
    char c;

    cin >> n;
    
    vector<bool> Rodadas;
    while(n--){
        cin >> expressao;

        //Encontra a posição em que encontra-se o caractere '^'. A posição será indicada por i-1.
        i = 0;
        c = expressao[i];
        for(i = 1; c != '^'; i++)
            c = expressao[i];
        i--;

        x = "";
        y = "";
        //A string x é igual a todos os caracteres antes de '^'
        for(j = 0; j < i; j++)
            x = x + expressao[j];
        //A string y é igual a todos os caracteres deopis de '^'
        for(j = i+1; j < expressao.length(); j++)
            y = y + expressao[j];

        //Converte as strings resultantes para inteiros.
        bas = stoi(x);
        exp = stoi(y);

        cin >> f;
        //Elimina o caractere '!'
        f[f.length() - 1] = '\0';
        //Converte a string resutante para um inteiro.
        fat = stoi(f);


        //log(a*b) = log(a) + log(b)

        /*
        A ideia é, utilizando a propriedade logarítmica acima:
        log(a * b * c * d * ... n) = log(a) + log(b) + log(c) + log(d) + ... + log(n)
        Assim, o resultado não será um número absurdamente grande, como seria se fôssemos calcular o fatorial de 10000.
        */
        fatorial = log(fat);
        for(i = fat-1; i >= 1; i--)
            fatorial += log(i);


        exponenciacao = log(bas);
        for(i = exp - 1; i >= 1; i--)
            exponenciacao += log(bas);

        //Lucas
        if(exponenciacao > fatorial)
            Rodadas.push_back(true);
        //Pedro
        else
            Rodadas.push_back(false);
    }
    
    //Conta o número de vitórias de cada um.
    for(i = 0; i < Rodadas.size(); i++){
        if(Rodadas[i])
            lucas++;
        else
            pedro++;
    }

    //Se empataram
    if(lucas == pedro)
        cout << "A competicao terminou empatada!\n";
    else{
        if(lucas > pedro)
            cout << "Campeao: Lucas!\n";
        else
            cout << "Campeao: Pedro!\n";
    }


    //Imprime os resultados
    for(i = 0; i < Rodadas.size(); i++){
        if(Rodadas[i])
            cout << "Rodada #"<< rodadas << ": Lucas foi o vencedor\n";
        else
            cout << "Rodada #"<< rodadas << ": Pedro foi o vencedor\n";
        
        rodadas++;
    }
    return 0;
}