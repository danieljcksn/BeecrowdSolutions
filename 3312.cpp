#include <bits/stdc++.h>
using namespace std;

#define a first
#define b second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884


typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<ll> vi;
typedef pair<ll, ll> ii;


typedef vector<int>bignum;
const int base=1000*1000*1000;

void print(bignum& a){
    printf("%d",a.empty()?0:a.back());
    for(int i=(int)a.size()-2;i>=0;--i){
        printf("%09d",a[i]);
    }
}
void fix(bignum&a){
    while(a.size()>1u&&a.back()==0)
        a.pop_back();
}
bool comp(bignum a,bignum b){
    fix(a);fix(b);
    if(a.size()!=b.size()) return a.size()<b.size();
    for(int i=(int)a.size()-1;i>=0;i--){
        if(a[i]!=b[i]) return a[i]<b[i];
    }
    return false;
}
void str2bignum(char* s, bignum&a){
    a.clear();
    for(int i=(int)strlen(s);i>0;i-=9){
        s[i]=0;
        a.push_back(atoi(i>=9?s+i-9:s));
    }
    fix(a);
}
bignum int2bignum(int n){
    bignum a;
    a.clear();
    if(n==0)a.push_back(0);
    for(;n>0;n/=base)
        a.push_back(n%base);
    
    return a;
}
int bignum2int(bignum&a){
    int ans=0,p=1;
    for(int i=0;i<(int)a.size();i++){
        ans+=a[i]*p;p*=base;
    }
    return ans;
}
bignum multiply(int a, bignum b){
    bignum c;
    int carry=0,bi;
    c.resize(b.size());
    for(int i=0;i<(int)b.size()||carry;i++){
        if(i==(int)b.size())c.push_back(0);
            bi=i<(int)b.size()?b[i]:0;
        long long cur=carry+a*1ll*bi;
        c[i]=int(cur%base);
        carry=int(cur/base);
    }
    fix(c);
    return c;
}

bool isPrime(int n){
    if(n < 2)
        return false;
    
    for(int i = 2; i * i <= n; ++i)
        if(n % i == 0)
            return false;

    return true;
}

int main(){
    int n;

    cin >> n;
    
    vector<bignum> factorials;

    factorials.pb(int2bignum(1));
    factorials.pb(int2bignum(1));

    for(int i = 2; i <= 100; ++i){
        factorials.pb(multiply(i, factorials[i-1]));
    }
    
    vector<int> primos;
    FOR(i, n){
        int x;
        cin >> x;

        if(isPrime(x))
            primos.pb(x);
    }

    for(auto it = primos.begin(); it != primos.end(); ++it){
        cout << *it << "! = ";
        print(factorials[*it]);
        cout << '\n';
    }

    
    return 0;
}
