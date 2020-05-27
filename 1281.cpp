//Questão 1281 - Indo à Feira - URI Online Judge
#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    int n, produtos, qt;
    string nome;
    double price, total;

    cin >> n;
    while(n--){
        cin >> produtos;

        map<string, double> P;
        //Produtos disponíveis
        while(produtos--){
            cin >> nome >> price;
            P.insert(make_pair(nome, price));
        }
        
        cin >> produtos;
        //Produtos que serão comprados
        total = 0;
        while(produtos--){
            cin >> nome >> qt;
            auto aux = P.find(nome);
            total = total + aux->second * qt;
        }   

        cout << fixed << setprecision(2);
        cout << "R$ " << total << endl;
    }  

    return 0;
}