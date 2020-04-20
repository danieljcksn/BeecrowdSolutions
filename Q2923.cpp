#include <iostream>

using namespace std;

int main(void){
    int t, a, w, c;
    double percent;

    while(cin >> t >> a >> w >> c){
        percent = double(a) / double(t) * 100.0;
        if(percent >= c)
            cout << "critical" << endl;
        else if(percent >= w)
            cout << "warning" << endl;
        else
            cout << "OK" << endl;
    }
    return 0;
}