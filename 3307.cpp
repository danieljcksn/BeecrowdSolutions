#include <bits/stdc++.h>

using namespace std;

#define PI 3.14

int main(){
	int n;
	
	cin >> n;
	
	while(n--){
		double area, r;
		
		cin >> area;
		
		r = sqrt(area / (4*PI));
		
		if(r <= 12)
			printf("vermelho = R$ %.2lf\n", area * 0.09);
		else if(r <= 15)
			printf("azul = R$ %.2lf\n", area * 0.07);
		else
			printf("amarelo = R$ %.2lf\n", area * 0.05);
	}
	
	
	
	
	return 0;
}
