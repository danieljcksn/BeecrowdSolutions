//Questão 2343 - Caçadores de Mitos - URI Online Judge
#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x, y, i;
    set<pair<int, int>> C;
    cin >> n;
    bool result = false;
    //n = número de raios
    while(n--){
        //Coordenada de onde caiu o raio.
        cin >> x >> y; 
        if(C.find(make_pair(x, y)) != C.end()){
            result = true;
            break;
        }
        else
            C.insert(make_pair(x, y));    
    }

    //Caso tenha encontrado dois raios em um lugar, o laço foi interrompido
    //Este for lê o restante dos valores apenas para finalizar a entrada, mas não são mais executados ifs - elses como no
    //laço acima. Poupando tempo e operações. (Poupou aproximadamente 0.3s)
    for(i = 0; i < n; i++)
            cin >> x >> y; 
    if(result)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}