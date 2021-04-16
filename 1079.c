#include <stdio.h>
 
int main() {
    int n;
    
    scanf("%d", &n);
    
    while(n--){
        double a, b, c;
        
        scanf("%lf %lf %lf", &a, &b, &c);
        printf("%.1lf\n", (a * (double)2 + b * (double)3.0 + c * (double)5) / 10);
    }
 
    return 0;
}
