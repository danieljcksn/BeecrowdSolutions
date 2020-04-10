#include <stdio.h>

int calls;

int fibonacci(int x){
    calls++;
    if(x == 0)
        return 0;
    else{
        if(x == 1)
            return 1;
        else
            return(fibonacci(x-1) + fibonacci(x-2));
    }
}

int main(void){
    int n, x, result;
    scanf("%d", &n);
    
    while(n > 0){
        scanf("%d", &x);
        calls = -1;
        result = fibonacci(x);
        printf("fib(%d) = %d calls = %d\n", x, calls, result);
        n--;
    }

    return 0;
}