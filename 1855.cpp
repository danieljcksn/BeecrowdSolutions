#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int rows, columns;

	cin >> columns >> rows;

	char map[rows][columns];

	for(int i=0; i<rows; ++i){
		string line; cin >> line;

		for(int j=0; j<columns; ++j){
			map[i][j] = line[j];
		}
	}

	set<pair<int, int>> visited;
	bool foundTreasure = false;

	pair<int, int> pos = {0, 0};

	int cont = 0;

	while(true){
		char currChar = map[pos.first][pos.second];
		visited.insert(pos);

		// cout << pos.first << ", " << pos.second << " -> " << currChar << '\n';

		if(currChar == '*'){
			foundTreasure = true;
			break;
		}

		if(currChar == '.') break;

		if(currChar == '<'){
			if(pos.second - 1 < 0) break;

			for(int i = pos.second-1; i >= 0; --i){
				pos.second = i;
				
				if(map[pos.first][pos.second] != '.') break;
			}
		}else if(currChar == '>'){
			if(pos.second + 1 >= columns) break;

			for(int i = pos.second+1; i < columns; ++i){
				pos.second = i;

				// cout << i << '\n';
				
				if(map[pos.first][pos.second] != '.') break;
			}
		}else if(currChar == '^'){
			if(pos.first - 1 < 0) break;

			for(int i = pos.first - 1; i >= 0; --i){
				pos.first = i;
				
				if(map[pos.first][pos.second] != '.') break;
			}
		}else{
			if(pos.first + 1 >= rows) break;

			for(int i = pos.first +1; i < rows; ++i){
				pos.first = i;
				
				if(map[pos.first][pos.second] != '.') break;
			}
		}


		if(visited.find(pos) != visited.end()){
			// cout << pos.first << ", " << pos.second << " was once visited" << '\n';
			break;
		}
	}

	cout << (foundTreasure ? '*':'!') << '\n';

}
