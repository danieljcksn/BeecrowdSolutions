#include <bits/stdc++.h>

using namespace std;

void add(int &r, int v){
	r = (r + v)%256;
}
void sub(int &r, int v) {
    r = (r - v + 256) % 256;
}
void mul(int &r, int v){
	r = (r * v)%256;
}
void _div(int &r, int v){
	r = (r / v)%256;
}
void _and(int &r, int v){
	r = (r & v)%256;
}
void _or(int &r, int v){
	r = (r | v)%256;
}
void _xor(int &r, int v){
	r = (r ^ v)%256;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	while(cin >> n){
		vector<pair<string, vector<int>>> instructions(n);

		for(int i=0; i<n; ++i){
			int idx; cin >> idx;
			string op; cin >> op;

			instructions[i].first = op;

			if(op == "halt"){
				continue;
			}

			if(op == "gotoif"){
				int v, instruction; cin >> v >> instruction;

				instructions[i].second.push_back(v);
				instructions[i].second.push_back(instruction-1);
			}else{
				int v; cin >> v;
				instructions[i].second.push_back(v);
			}
		}

		int currentValue = 0;

		int it = 0;

		for(int i=0; i<n; ++i){
			it++;
			string op = instructions[i].first;

			if(it > 100000){
				break;
			}

			if(op == "halt"){
				cout << currentValue << '\n';
				break;
			}

			int v = instructions[i].second[0];

			if(op == "gotoif"){
				if(currentValue >= v){
					i = instructions[i].second[1] - 1;
					continue;
				}
			}
			else if (op == "add"){
				add(currentValue, v);
			}
			else if (op == "sub")
			{
				sub(currentValue, v);
			}
			else if (op == "mul")
			{
				mul(currentValue, v);
			}
			else if (op == "div")
			{
				_div(currentValue, v);
			}
			else if (op == "or")
			{
				_or(currentValue, v);
			}
			else if (op == "xor")
			{
				_xor(currentValue, v);
			}
			else if (op == "and")
			{
				_and(currentValue, v);
			}
		}

		if(it > 100000){
			cout << "execucao infinita\n";
		}
	}
}
