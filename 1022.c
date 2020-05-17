/* URI Online Judge | 1022
TDA Racional
Recebendo 5% de WA '-'
*/
#include <stdio.h>

int calculaMDC(int x, int y){
    int resto;

    resto = x % y;
    while(resto){
        x = y;
        y = resto;
        resto = x % y;
    }

    return y;
}

int main(void){
    int n, N1, N2, D1, D2, num, den, mdc;
    char op;
    scanf("%d", &n);
    
    while(n--){
        scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);

        switch(op){
            case '+':
                num = N1*D2 + N2*D1;
                den = D1*D2;
                break;
            case '-':
                num = N1*D2 - N2*D1;
                den = D1*D2;
                break;
            case '*':
                num = N1*D2;
                den = D1*D2;
                break;
            case '/':
                num = N1*D2;
                den = N2*D1;
                break;
            default: 
                break;
        }

        printf("%d/%d = ", num, den);

        mdc = calculaMDC(num, den);

        if(mdc < 0)
            printf("%d/%d\n", -(num / mdc), -(den / mdc));
        else
            printf("%d/%d\n", (num / mdc), (den / mdc));
    }

    return 0;
}