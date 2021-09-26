#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define INF 0arr[2].a*f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define EPS 1e-9
#define PI 3.141592653589793238462643383279502884
#define debug(x) cout << "DEBUG: " << x << endl;

#define a first
#define b second
#define pb push_back
#define mp make_pair
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define FOR(i, n) for(int i=0; (i) < int(n); (i)++)

typedef pair<double, double> dd;
typedef vector<dd> vdd;

//https://www.onlinemath4all.com/area-of-quadrilateral-when-four-vertices-are-given.html
double area(vdd arr){
    return fabs((((double)1/(double)2) * ((arr[0].a*arr[1].b + arr[1].a * arr[2].b + arr[2].a*arr[3].b + arr[3].a*arr[0].b) - (arr[1].a * arr[0].b + arr[2].a*arr[1].b + arr[3].a*arr[2].b + arr[0].a*arr[3].b))));
}

double dist(dd p1, dd p2){
    return sqrt( (p1.a - p2.a)*(p1.a - p2.a) +
                 (p1.b - p2.b)*(p1.b - p2.b) );
}

int main(){

    vdd ta(4), tb(4);

    FOR(i, 4)
        cin >> ta[i].a >> ta[i].b;

    FOR(i, 4)
        cin >> tb[i].a >> tb[i].b;


    sort(all(ta));
    sort(all(tb));

    double areaA = area(ta);
    double areaB = area(tb);
    //debug(areaA);
    //debug(areaB);
    if(fabs(areaA - areaB) < EPS || areaB > areaA)
        cout << "terreno B\n";
    else
        cout << "terreno A\n";

    return 0;
}
