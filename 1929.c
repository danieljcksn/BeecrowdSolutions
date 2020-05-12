//Questão 1929 - Triângulo - URI Online Judge
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool verifica(int a, int b, int c){
    if(abs(b-c) < a && a < b + c){
        if(abs(a - c) < b && b < a + c){
            if(abs(a - b) < c && c < a + b)
                return true;
        }
    }else
        return false;
}
int main(void){
    int a, b, c, d;
    scanf("%d %d %d %d", &a,  &b, &c, &d);

    /*
    São 4 elementos, tomados 3 a 3. Por tanto, há 4 combinações possíveis
    A - B - C
    A - C - D
    A - B - D
    B - C - D
    */
    if(verifica(a, b, c))   
        printf("S\n");
    else if(verifica(a, c, d))
        printf("S\n");
    else if(verifica(a, b, d))
        printf("S\n");
    else if(verifica(b, c, d))
        printf("S\n");
    else
        printf("N\n");
    

  return 0;
}