#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)
#define _ ios_base::sync_with_stdio(0), cin.tie(0);
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884


typedef unsigned long long ull;//ULL
typedef long long ll;//1LL
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

ll inv = 0;
vi merge(vi a, vi b){
    vi merged;

    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] < b[j]){
            merged.pb(a[i]);
            i++;
        }else{
            inv += sz(a) - i;
            merged.pb(b[j]);
            j++;
        }
    }

    while(i < a.size()){
        merged.pb(a[i]);
        i++;
    } 
    while(j < b.size()){
        merged.pb(b[j]);
        j++;
    } 

    return merged;
}

vi mergeSort(vi arr){
    if(sz(arr) <= 1)
        return arr;
    
    vi a, b;
    int mid = sz(arr)/2;

    for(int i = 0; i < mid; ++i)
        a.pb(arr[i]);
    
    for(int j = mid; j < sz(arr); ++j)
        b.pb(arr[j]);

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a, b);
}

int main(){_
    ll x, y, h, v, x1, x2, y1, y2;
    cin >> x >> y >> h >> v;

    vii pairs;
    for(int i = 0; i < h; ++i){
        cin >> y1 >> y2;

        pairs.pb({y1, y2});
    }

    sort(all(pairs));

    vi arr;
    for(int i = 0; i < sz(pairs); ++i)
        arr.pb(pairs[i].second);

    mergeSort(arr);
    pairs.clear();
    arr.clear();

    for(int i = 0; i < v; ++i){
        cin >> x1 >> x2;
        pairs.pb({x1, x2});
    }

    sort(all(pairs));

    for(int i = 0; i < sz(pairs); ++i)
        arr.pb(pairs[i].second);   
    mergeSort(arr);

    cout << h * v + h + v + inv + 1 << endl;

    return 0;
}
