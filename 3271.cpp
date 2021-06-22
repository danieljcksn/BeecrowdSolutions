#include <bits/stdc++.h>

using namespace std;

#define pb push_back

vector<int> gerarDado(int a, int  b){
    vector<int> A;
    for(int i = a; i <= b; ++i)
        A.pb(i);

    return A;
}

vector<int> combinar(vector<int> A1, vector<int> A2){
    vector<int> AComb;
    for(int i = 0; i < A1.size(); ++i)
        for(int j = 0; j < A2.size(); ++j)
            AComb.pb(A1[i] + A2[j]);

    return AComb;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int probA = 0, probB = 0;

    vector<int> A1, A2, B1, B2;

    int a, b, c, d;

    cin >> a >> b >> c >> d;
    A1 = gerarDado(a, b);
    A2 = gerarDado(c, d);

    cin >> a >> b >> c >> d;
    B1 = gerarDado(a, b);
    B2 = gerarDado(c, d);

    vector<int> AComb = combinar(A1, A2), BComb = combinar(B1, B2);

    for(int i = 0; i < AComb.size(); ++i){
        for(int j = 0; j < BComb.size(); ++j){
            if(AComb[i] > BComb[j])
                probA++;
            else if(AComb[i] < BComb[j])
                probB++;
        }
    }

    if(probA > probB){
        cout << "Gunnar\n";
    }else if(probB > probA)
        cout << "Emma\n";
    else
        cout << "Tie\n";

    return 0;
}
