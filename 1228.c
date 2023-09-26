#include <stdio.h>
#include <stdlib.h>

int inv = 0;

void merge(int a[], int a_size, int b[], int b_size, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < a_size && j < b_size) {
        if (a[i] < b[j]) {
            merged[k++] = a[i++];
        } else {
            inv += a_size - i;
            merged[k++] = b[j++];
        }
    }

    while (i < a_size) {
        merged[k++] = a[i++];
    }

    while (j < b_size) {
        merged[k++] = b[j++];
    }
}

void mergeSort(int arr[], int size) {
    if (size <= 1)
        return;

    int mid = size / 2;
    int *a = malloc(mid * sizeof(int));
    int *b = malloc((size - mid) * sizeof(int));

    for (int i = 0; i < mid; ++i)
        a[i] = arr[i];

    for (int i = mid; i < size; ++i)
        b[i - mid] = arr[i];

    mergeSort(a, mid);
    mergeSort(b, size - mid);

    merge(a, mid, b, size - mid, arr);

    free(a);
    free(b);
}

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int *start = malloc(n * sizeof(int));
        int *end = malloc(n * sizeof(int));

        for (int i = 0; i < n; ++i) {
            scanf("%d", &start[i]);
        }

        for (int i = 0; i < n; ++i) {
            scanf("%d", &end[i]);
        }

        int ans = 0;

        inv = 0;

        int *mp = malloc((n + 1) * sizeof(int));

        for (int i = 0; i < n; ++i) {
            mp[start[i]] = i + 1;
        }

        int *arr = malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i)
            arr[i] = i + 1;

        for (int i = 0; i < n; ++i)
            end[i] = mp[end[i]];

        mergeSort(end, n);

        printf("%d\n", inv);

        free(start);
        free(end);
        free(mp);
        free(arr);
    }

    return 0;
}
