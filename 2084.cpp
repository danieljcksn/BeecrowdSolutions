//Problema 2084 - Eleições - URI Online Judge
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, dif;
    float percent;
    bool flag;

    cin >> n;

    int votos[n], i, total = 0;

    for(i = 0; i < n; i++){
        cin >> votos[i];
        total += votos[i];
    }

    //Ordena decrescentemente
    sort(votos, votos + n, greater<int>());

    percent = 0.45 * total;
    //O mais votado encontra-se na primeira posição do vetor.
    //Caso o candidato possua pelo menos 45% de todos os votos
    if(votos[0] >= percent)
        cout << "1\n";
    else{
        percent = 0.4 * total;
        //Caso possua pelo menos 40% de todos os votos
        if(votos[0] >= percent){
            flag = true;
            for(i = 1; i < n; i++){
                //Calcula a diferença de votos entre o candidato votos[0] e todos os outros
                dif = votos[0] - votos[i];
                //Se a diferença for menor que 10%, ele não é eleito no primeiro turno.
                percent = (float)dif / total * 100;
                if(percent < 10){
                    flag = false;
                    break;
                }
            }
            if(flag)
                cout << "1\n";
            else
                cout << "2\n";
        }
        else
            cout << "2\n";
    }
    return 0;
}