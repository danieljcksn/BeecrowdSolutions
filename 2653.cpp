//Questão 2653 - Djikstra - URI Online Judge
#include <iostream>
#include <set>

using namespace std;

int main(){
    int tipos = 0;
    string joia;
    set<string> banco;

    while(cin >> joia){
        if(banco.find(joia) == banco.end()){
            banco.insert(joia);
            tipos++
        }
    }

    cout << tipos << endl;
    return 0;
}