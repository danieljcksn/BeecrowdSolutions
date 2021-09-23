#include <bits/stdc++.h> 

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int Canhota[n+1][2];
    for(int i = 1; i <= n; ++i){
        int node;

        cin >> node;
        cin >> Canhota[node][0] >> Canhota[node][1];
    }   

    int m;
    cin >> m;
    int cnode;

    int Destra[m+1][2];
    for(int i = 1; i <= m; ++i){
        int node;

        cin >> node;
        cin >> Destra[node][0] >> Destra[node][1];
    }   

    int seq_e = 1, seq_d = 1;


    //Sequência de vértices centrais partindo dos nós
    for(int i = 2; i <= n; ++i){
        int seqlocal = 1;
        
        cnode = Canhota[i][1];
        while(cnode){
            seqlocal++;
            cnode = Canhota[cnode][1];
        }
        
        seq_e = max(seq_e, seqlocal);
    }


    //Sequência de vértices centrais partindo da raiz da árvore canhota
    int seqRaiz_e = 1;
    cnode = Canhota[1][1];
    while(cnode){
        if(cnode) seqRaiz_e++;
        cnode = Canhota[cnode][1];
    }
    //Sequência de vértices centrais partindo da raiz da raiz da árvore destra
    int seqRaiz_d = 1;
    cnode = Destra[1][0];
    while(cnode){
        //cout << cnode << " - ";
        if(cnode) seqRaiz_d++;
        cnode = Destra[cnode][0];
    }

    //Sequência de vértices centrais partindo dos nós
    for(int i = 2; i <= m; ++i){
        int seqlocal = 1;
        
        cnode = Destra[i][0];
        while(cnode){
            seqlocal++;
            cnode = Destra[cnode][0];
        }
        
        seq_d = max(seq_d, seqlocal);
    }

    //cout << seqRaiz_e << " - " << seqRaiz_e << '\n';
    int op1 = min(seqRaiz_e, seq_d), op2 = min(seqRaiz_d, seq_e), op3 = min(seqRaiz_e, seqRaiz_d);
    cout << m + n - max(max(op1, op2), op3) << '\n';

    return 0;
}
