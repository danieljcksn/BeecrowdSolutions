#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int city = 1;

	while(true){
		int n; cin >> n;

		if(!n) break;
		if(city != 1) cout << '\n' << '\n';

		// pessoas, consumo
		vector<pair<int, int>> imoveis(n);

		int total_pessoas = 0;
		int total_consumo = 0;

		for(int i=0; i<n; ++i){
			cin >> imoveis[i].first >> imoveis[i].second;

			total_pessoas += imoveis[i].first;
			total_consumo += imoveis[i].second;
		}

		map<int, int> consumo;

		for(auto imovel:imoveis){
			int c = imovel.second / imovel.first;

			if(consumo.find(c) == consumo.end()){
				consumo[c] = imovel.first;
			}else{
				consumo[c] += imovel.first;
			}
		}

		cout << "Cidade# " << city++ << ":\n";
		int cnt = 1;
		for(auto it:consumo){
			cout << it.second << '-' << it.first;
			
			if(cnt != consumo.size()) cout << ' ';
			cnt ++;
		}

		double mean = (double)total_consumo / (double)total_pessoas;

		int precision = 2;

		double multiplier = std::pow(10.0, precision);
		double truncated = std::floor(mean * multiplier) / multiplier;

		cout << "\nConsumo medio: " << fixed << setprecision(2) << truncated  <<  " m3."; 
	}
}
