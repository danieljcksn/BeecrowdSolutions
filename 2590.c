//Questão 2590 - Sete - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int t, r;
    long int n;

    scanf("%d", &t);
    while(t > 0){
        scanf("%li", &n);

        r = n % 4;
        switch(r){
            case 0:
                printf("1\n");
                break;
            case 1:
                printf("7\n");
                break;
            case 2:
                printf("9\n");
                break;
            case 3:
                printf("3\n");
                break;
        }

        t--;
    }

    return 0;
}