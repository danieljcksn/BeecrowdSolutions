#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int ll;
typedef vector<int>bignum;
const int base=1000*1000*1000;

void print(bignum&a){
    printf("%d",a.empty()?0:a.back());
    for(int i=(int)a.size()-2;i>=0;--i){
        printf("%09d",a[i]);
    }
}
void fix(bignum&a){
    while(a.size()>1u&&a.back()==0)
        a.pop_back();
}
//true if a < b
//false if b >= a
bool comp(bignum a,bignum b){
    fix(a);fix(b);
    if(a.size()!=b.size()) return a.size()<b.size();
    for(int i=(int)a.size()-1;i>=0;i--){
        if(a[i]!=b[i]) return a[i]<b[i];
    }
    return false;
}
void str2bignum(string str, bignum&a){
    char* s = &str[0];
    a.clear();
    for(int i=(int)strlen(s);i>0;i-=9){
        s[i]=0;
        a.push_back(atoi(i>=9?s+i-9:s));
    }
    fix(a);
}
void sum(bignum&a,bignum&b,bignum&c){
    int carry=0, n=max(a.size(),b.size());
    c.resize(n);
    for(int i=0,ai,bi;i<n;i++){
        ai=i<(int)a.size()?a[i]:0;
        bi=i<(int)b.size()?b[i]:0;
        c[i]=carry+ai+bi;
        carry=c[i]/base;
        c[i]%=base;
    }
    if(carry>0) c.push_back(carry);
    fix(c);
}


int main(){
    while(true){
        string aa, bb;

        cin >> aa >> bb;

        if(aa == "0" && bb == "0") break;

        bignum f, s, a, b;

        ll ans = 0;

        str2bignum(aa, a);
        str2bignum(bb, b);
        str2bignum("1", f);
        str2bignum("2", s);

        if(!comp(f, a) && !comp(b, f))
            ans++;
        if(!comp(s, a) && !comp(b, s))
            ans++;

        //Se a < b: true
        //Se a >= b: false
        while(!comp(b, s)){
            bignum cs = s;
            sum(f, s, s);
            f = cs;
            if(!comp(s, a) && !comp(b, s))
                ans++;
        }
        
        cout << ans << '\n';
    }

    return 0;
}
