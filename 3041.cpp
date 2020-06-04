//Questão 3041 - Distribuição de Artigos - URI Online Judge
#include <iostream>
#include <algorithm>


using namespace std;

int main(){
    int n, i, artigos, total, j;

    while(true){
        cin >> n;

        if(!n)
            break;

        int revisores[n];
        int revs[n];

        //Total armazena o número de artigos que podem ser corrigidos.
        total = 0;
        for(i = 0; i < n; i++){
            cin >> revisores[i];
            total += revisores[i];

            //Zerando todo o vetor que armazenará a quantidade de artigos corrigidos
            revs[i] = 0;
        }
        
        cin >> artigos;

        if(artigos > total)
            cout << "Impossible\n";
        else{
            while(artigos > 0){
                for(i = 0; i < n; i++){
                    if(artigos > 0){
                        if(revs[i] < revisores[i]){
                            revs[i]++;
                            artigos--;
                        }
                    }else
                        break;
                }
            }


            sort(revs, revs + n, greater<int>());

            for(i = 0; i < n; i++)
                cout << revs[i] << "\n";
        }
        

    
    }

    return 0;
}