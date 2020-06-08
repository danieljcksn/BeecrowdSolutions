//Problema 1170 - Blobs - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, dias;
    float c;

	cin >> n;
	
    while(n--){
        cin >> c;

        dias = 0;
        while(c > 1.0){
            c -= c / 2;
            dias++;
        }


        cout << dias << " dias\n";
    }

    return 0;
}