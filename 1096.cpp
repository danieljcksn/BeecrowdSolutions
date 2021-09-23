#include <bits/stdc++.h>

using namespace std;

int main(){
    for(int i = 1; i <= 9; i += 2){
        for(int w = 0, j = 7; w < 3; ++w, j--){
            printf("I=%d J=%d\n", i, j);
        }
    }
    return 0;
}
