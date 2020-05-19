//Questão 3035 - Fabrica de Peças - URI Online Judge
#include <iostream>
#include <map>

using namespace std;

int main(){
    int n, c, q, i;
    string p, p1, p2;
    map<string, int> P;

    cin >> n;
    i = n;
    while(i--){
        cin >> p >> c;
        P.insert(make_pair(p, c));
    }

    while(cin >> p1 >> p2 >> q){
        auto x = P.find(p1);
        auto y = P.find(p2);
        //Se a peça composta P1 já foi inserida no map
        if(x != P.end()){
            x->second = x->second + (y->second * q);
        }else{
        //Se não estiver, insere
            P.insert(make_pair(p1, y->second * q));
        }
    }
    
    i = 0;
    for(auto x = P.begin(); x != P.end(); x++){
        i++;
        //Garantindo que sejam impressos apenas peças compostas
        if(i <= n){
            continue;
        }
        else
            cout << x->first << " " << x->second << endl;
    }
    return 0;
}