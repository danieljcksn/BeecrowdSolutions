#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high){
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++){
        if (array[j] <= pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

void quickSort(int array[], int low, int high){
    if(low < high){
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}
void c_divisors(int c, int divisors[]){
    int idx = 0;
    for(int i = 1; i <= sqrt(c); ++i){
        if (c % i == 0){
            if(c/i == i){
                divisors[idx] = i;
                idx++;
            }
            else{
                divisors[idx] = i;
                idx++;
                divisors[idx] = c/i;
                idx++;
            }
        }
    }
}

bool verify(int n, int a, int b, int d){
    return (n % a == 0 && n % b != 0 && d % n != 0);
}

int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int divisors[1000];
    
    for(int i = 0; i < 1000; ++i)
        divisors[i] = 0;

    c_divisors(c, divisors);
    quickSort(divisors, 0, 99);
    int ans = -1;
    
    for(int i = 0; i < 1000; ++i){
        if(divisors[i] == 0) continue;
        if(verify(divisors[i], a, b, d)){
            ans = divisors[i];
            break;
        }
    }

    printf("%d\n", ans);

    return 0;
}
