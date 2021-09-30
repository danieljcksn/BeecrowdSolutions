#include <stdio.h>
#include <string.h>

typedef long long ll;//1LL

    //W -- idx
ll PD[200][60];
ll proj[60][2];

ll max(ll a, ll b){
    if(a >= b)
        return a;
    return b;
}

//returns the damage
ll pd(ll W, ll idx){
    if(idx == 0 && W >= proj[idx][1])
        return proj[0][0];

    else if(idx == 0)
        return 0;

    if(PD[W][idx] != -1)
        return PD[W][idx];

    ll ans;
    if(W-proj[idx][1] >= 0)
        ans = max(proj[idx][0] + pd(W - proj[idx][1], idx-1), pd(W, idx-1));
    else
        ans = pd(W, idx-1);
        
    return PD[W][idx] = ans;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        ll n, W, ans, castle_hp;

        scanf("%lld", &n);
        memset(PD, -1, sizeof(PD));

        for(int i = 0; i < n; ++i) 
            scanf("%lld %lld", &proj[i][0], &proj[i][1]);

        scanf("%lld %lld", &W, &castle_hp);

        ans = pd(W, n-1);

        if(ans >= castle_hp)
            printf("Missao completada com sucesso\n");
        else
            printf("Falha na missao\n");
    }

    return 0;
}
