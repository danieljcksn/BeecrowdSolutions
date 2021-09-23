#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, tam;
    char foot;
    while(cin >> n){
        map<int, pair<int, int>> botas;
        int pares = 0;

        while(n--){
            cin >> tam >> foot;

            if(botas.find(tam) == botas.end()){
                if(foot == 'E')
                    botas.insert({tam, {1, 0}});
                else
                    botas.insert({tam, {0, 1}});
            }else{
                if(foot == 'E')
                    botas.find(tam)->second.first++;
                else
                    botas.find(tam)->second.second++;
            }
        }
        for(auto it = botas.begin(); it != botas.end(); ++it)
            pares += min(it->second.first, it->second.second);

        cout << pares << '\n';

        botas.clear();
    }   


    return 0;
}
