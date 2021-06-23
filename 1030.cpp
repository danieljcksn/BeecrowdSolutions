#include <bits/stdc++.h>

using namespace std;

int main(){
    int nc, n, k, caso = 1;

    cin >> nc;

    while(nc--){
        cin >> n >> k;

        set<int> soldados;

        for(int i = 1; i <= n; ++i)
            soldados.insert(i);

        int qtSoldados = n;

        auto it = soldados.end();
        --it;

        int last = *it;
        while(qtSoldados > 1){
            int passo = 0;
            auto it = soldados.find(last);

            while(passo < k){
                it++;
                if(it == soldados.end())
                    it = soldados.begin();
                passo++;
            }
            
            auto copy = it;
            if(copy == soldados.begin()){
                copy = soldados.end();
                copy--;
            }else
                copy--;
        
            last = *it;
            soldados.erase(soldados.find(*it));
            last = *copy;
            qtSoldados--;
        }

        cout << "Case " << caso << ": " << *soldados.begin() << '\n';
        caso++;
    }



    return 0;
}
