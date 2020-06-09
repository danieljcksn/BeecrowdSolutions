//Problema 1808 - O Retorno do Rei - URI Online Judge
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int i;
    float media, soma = 0;
    string notas;
    vector<int>separadas;
    cin >> notas;

    for(i = notas.length() - 1; i >= 0; i--){
        //Só existirá um zero quando acompanhado por 1 (nota 10)
        if(notas[i] == '0'){
            separadas.push_back(10);
            i--;
        }
        //usando a tabela ASCII
        else
            separadas.push_back(notas[i] - 48);
    }

    //Soma todos os elementos
    for(i = 0; i < separadas.size(); i++)
        soma += separadas[i];

    cout << fixed << setprecision(2);

    //Calcula a média.
    media = soma / separadas.size();

    cout << media << endl;

    return 0;
}