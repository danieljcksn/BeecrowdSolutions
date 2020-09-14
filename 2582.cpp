//Problema 2582 - System of a Download | URI Online Judge
#include <iostream>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 

    int c, x, y, sum;

    cin >> c;

    while(c--){
        cin >> x >> y;

        sum = x + y;

        switch(sum){
            case 0:
                cout << "PROXYCITY\n";
                break;
            case 1:
                cout << "P.Y.N.G.\n";
                break;
            case 2:
                cout << "DNSUEY!\n";
                break;
            case 3:
                cout << "SERVERS\n";
                break;            
            case 4:
                cout << "HOST!\n";
                break;
            case 5:
                cout << "CRIPTONIZE\n";
                break;
            case 6:
                cout << "OFFLINE DAY\n";
                break;
            case 7:
                cout << "SALT\n";
                break;
            case 8:
                cout << "ANSWER!\n";
                break;
            case 9:
                cout << "RAR?\n";
                break;
            case 10:
                cout << "WIFI ANTENNAS\n";
                break;
        }
    }

    return 0;
}
