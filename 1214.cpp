//Questão 1214 - Acima da Média - URI Online Judge
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c, n, i, total, acima;
    float media, media1;

    cin >> c;
    while(c > 0){
        cin >> n;

        //O número de alunos acima da média e o total das médias são zerados
        acima = 0;
        total = 0;

        int alunos[n];

        for(i = 0; i < n; i++){
            cin >> alunos[i];
            total += alunos[i];
        }
        
        //Calculando a media dos alunos
        media = (float)total / n;

        for(i = 0; i < n; i++){
            if(alunos[i] > media)
                acima++;
        }

        //Calculando a média dos alunos acima da média kkk
        media1 = (float)acima / n * 100;
        cout << fixed << setprecision(3);
        cout << media1 << "%" << endl;

        c--;
    }


    return 0;
}