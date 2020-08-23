//Problema 2589 -Maior Distância Entre Primos Consecutivos
#include <bits/stdc++.h>

using namespace std;

int main(){
    long n;
    int i, tam;
    
    vector<pair<long, long>> Table {{2, 0}, {3, 1}, {5, 2}, {11, 4}, {29, 6}, {97, 8}, {127, 14}, {541, 18}, {907, 20}, {1151, 22}, {1361, 34}, {9587, 36}, {15727, 44}, {19661, 52}, {31469, 72}, {156007, 86}, {360749, 96}, {370373, 112}, {492227, 114}, {1349651, 118}, {1357333, 132}, {2010881, 148}, {4652507, 154}, {17051887, 180}, {20831533, 210}, {47326913, 220}, {122164969, 222}, {189695893, 234}, {191913031, 248}, {387096383, 250}, {436273291, 282}};
    tam = Table.size();

    while(scanf("%li", &n) != EOF){
        i = 0;
        while((n >= Table[i].first) && (i <= (tam - 1)))
            i++;
        
        if(i != 0)
            printf("%li\n", Table[i-1].second);
        else
            printf("%li\n", Table[i].second);
    }   

    return 0;
}