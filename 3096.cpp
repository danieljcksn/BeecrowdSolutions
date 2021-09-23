#include <bits/stdc++.h>

using namespace std;

long long countDigits(int n){
    if (n <= 1)
        return 1;
 
    //Kamenetsky formula
    double x = ((n * log10(n / M_E) +
                 log10(2 * M_PI * n) /
                 2.0));
 
    return floor(x) + 1;
}

int main(){
	long long n;
	
	cin >> n;
		
	cout << countDigits(n) << '\n';
	
	return 0;
}
