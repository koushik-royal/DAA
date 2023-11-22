#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    selection_sort(numbers, n);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Sorted array: \n");

    for (int i = 0; i < n; i++)
        printf("%d ", numbers[i]);

    printf("\nTime complexity: O(n^2)\n");
    printf("Time taken by program is : %f\n", cpu_time_used);
    return 0;
}
