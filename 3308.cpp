#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, a1, a2, a3;
	
	cin >> n;
	
	while(n--){
		cin >> m >> a1 >> a2 >> a3;
		
		if((a1 + a2 + a3) > 1)
			cout << "X\n";
		else if(m || !(a1 + a2 + a3))
			cout << "0\n";
		else
			cout << "1\n";
	}
	
	return 0;
}
