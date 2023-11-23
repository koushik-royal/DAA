#include <stdio.h>
void printSubsets(int arr[], int n) {
    
    int totalSubsets = 1 << n;

    for (int i = 0; i < totalSubsets; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("All possible subsets of the array:\n");
    printSubsets(arr, n);

    return 0;
}
