#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void findMaxMin(int arr[], int n, int M, int N, int *max, int *min) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    *max = arr[M - 1];
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }

    *min = arr[N - 1];
}

int main() {
    int n, arr[100], M, N;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Illegal input for array size\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of M: ");
    scanf("%d", &M);

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (M <= 0 || M > n || N <= 0 || N > n) {
        printf("Illegal input for M or N\n");
        return 1;
    }

    int max, min;
    findMaxMin(arr, n, M, N, &max, &min);

    printf("The %d-th maximum number is: %d\n", M, max);
    printf("The %d-th minimum number is: %d\n", N, min);
    printf("The sum of the %d-th maximum number and the %d-th minimum number is: %d\n", M, N, max + min);
    printf("The difference of the %d-th maximum number and the %d-th minimum number is: %d\n", M, N, max - min);

    return 0;
}