#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int grenais, inter, gremio, draws;

    grenais = inter = gremio = draws = 0;

    while(true){
        int i, g, ans;

        cin >> i >> g;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> ans;
        
        if(i > g)
            inter++;
        else if(g > i)
            gremio++;
        else
            draws++;
        
        grenais++;

        if(ans == 2)
            break;
    }

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draws);

    if(inter > gremio)
        printf("Inter venceu mais\n");
    else if(gremio > inter)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    

    return 0;
}
