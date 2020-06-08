//Problema 1171 - Frequência de Números - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int n, x, impressos = 0, k;

    cin >> n;
    k = n;

    int vet[2001];
    for(int i = 0; i <= 2000; i++)
    	vet[i] = 0;
    	
	while(n--){
		cin >> x;
		vet[x]++;
	}
	
	for(int i = 1; i <= 2000; i++){
		if(vet[i]){
			cout << i << " aparece "<< vet[i] <<" vez(es)\n";
            impressos++;

            if(impressos > k)
                break;
        }
	}

    return 0;
}