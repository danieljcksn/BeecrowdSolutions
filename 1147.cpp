#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int test = 1;

	while(true){
		string horse; cin >> horse;

		if(horse == "0") break;

		bool chessBoard[8][8];

		for(int i=0; i<8; ++i){
			for(int j=0; j<8; ++j){
				chessBoard[i][j] = false;
			}
		}

		for(int i=0; i<8; ++i){
			string pawn; cin >> pawn;

			int x = pawn[0] - '0' - 1;
			int y = pawn[1] - 'a';

			// cout << x + 1<< ", " << y + 1 << '\n';

			// cout << "attack pos [" << x << ", " << y << "] and pos [" << x << ", " << y + 2 << "]\n";

			if(x > 0){
				if(y > 0){
					chessBoard[x-1][y-1] = true;
				}

				if(y < 7){
					chessBoard[x-1][y+1] = true;
				}
			}
		}

		// for(int i=7; i>=0; --i){
		// 	for(int j=0; j < 8; ++j){
		// 		cout << "[" << chessBoard[i][j] << "]";
		// 	}
		// 	cout << '\n';
		// }

		int x = horse[0] - '0' - 1;
		int y = horse[1] - 'a';

		int ans = 0;

		if(y - 2 >= 0){
			if(x + 1 <= 7){
				ans += !chessBoard[x+1][y-2];
			}
			if(x-1 >= 0){
				ans += !chessBoard[x-1][y-2];
			}
		}

		if(y - 1 >= 0){
			if(x+2 <= 7){
				ans += !chessBoard[x+2][y-1];
			}
			if(x-2 >= 0){
				ans += !chessBoard[x-2][y-1];
			}
		}

		if(y + 2 <= 7){
			if(x + 1 <= 7){
				ans += !chessBoard[x+1][y+2];
			}
			if(x-1 >= 0){
				ans += !chessBoard[x-1][y+2];
			}
		}

		if(y + 1 >= 0){
			if(x+2 <= 7){
				ans += !chessBoard[x+2][y+1];
			}
			if(x-2 >= 0){
				ans += !chessBoard[x-2][y+1];
			}
		}

		cout << "Caso de Teste #" << test++ << ": " << ans << " movimento(s).\n";
	}
}
