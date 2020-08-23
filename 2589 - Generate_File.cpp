//Este programa gera uma tabela com os intervalos maximais entre os primos de 2 à 1000000000
#include <bits/stdc++.h>

using namespace std;


class MedeTempo {
    private:
    string funcao;
    clock_t inicio;
    public:
    MedeTempo(const string &f){
        inicio = clock();
        funcao = f;
    }
    ~MedeTempo(){
        clock_t total = clock() - inicio;
        cout << "Tempo para a funcao " << funcao << ": (segundos) "<< double(total)/CLOCKS_PER_SEC<<endl;
    }
};


bool verificaPrimo(long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

int main(){
    long i, prime, maxGap = -1, currentGap;


    MedeTempo mt("main");
    ofstream table;
    table.open("tabela.txt");

    prime = 2;
    for(i = 3; i <= 1000000000; i++){
        if(verificaPrimo(i)){
            currentGap = i - prime;
            if(currentGap > maxGap){
                maxGap = currentGap;
                table << '[' << i << " , " << maxGap << "]\n";
                cout << i - maxGap << endl;
            }
            prime = i;
        }
    }
}