//Questão 2590 - Sete - URI Online Judge
#include <iostream>

using namespace std;

int main(){
    int t, r;
    long int n;

    /*
    Padrão:
    (7)
    4(9)
    34(3)
    240(1)
    1680(7)
    11764(9)
    82354(3)
    576480(1)
    4035360(7)

    O final da potência sempre seguirá a sequência 7 - 9 - 3 - 1
    */

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