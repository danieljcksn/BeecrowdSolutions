//Questão 1880 - Renzo e a Decoração Capicuânica - URI Online Judge
#include <iostream>
#include <vector>

using namespace std;

bool baseN(long int n, int base){
    int resto, i;
    bool flag = true;
  
    vector<int> conv;
    vector<int> conv1;

    //Converte o número para a base inserida através das divisões sucessivas.
    while(n > 0){
        resto = n % base;
        conv.push_back(resto);
        n /= base;
    }
    
    //O vector de conv1 armazenará o número na ordem natural.
    for(i = conv.size() - 1; i >= 0; i--)
        conv1.push_back(conv[i]);

    for(i = 0; i < conv.size(); i++){
        if(conv1[i] != conv[i]){
            flag = false;
            break;
        }
    }
    return flag;
}

int main(){
    int t, i;
    long int n;
    vector<int> bases;
    cin >> t;

    while(t--){
        cin >> n;

        for(i = 2; i <= 16; i++){
            //Insere a base em que n foi um capicua no vector 'bases'
            if(baseN(n, i))
                bases.push_back(i);
        }

        //Caso não seja capicua em nenhuma das bases.
        if(bases.size() == 0)
            cout << -1 << endl;
        else{
            for(i = 0; i < bases.size() - 1; i++)
                cout << bases[i] << " ";
            //Imprime a última resposta com uma quebra de linha.
            cout << bases[i] << endl;
        }

        //Limpa as respostas.
        bases.clear();
    }

    return 0;
}