#include <stdio.h>
void merge(int arr1[], int size1, int arr2[], int size2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        merged[k++] = arr1[i++];
    }

    while (j < size2) {
        merged[k++] = arr2[j++];
    }
}
void mergeSort(int arr[], int size) {
    if (size > 1) {
        int mid = size / 2;

        int left[mid];
        int right[size - mid];
        for (int i = 0; i < mid; i++) {
            left[i] = arr[i];
        }

        for (int i = mid; i < size; i++) {
            right[i - mid] = arr[i];
        }
        mergeSort(left, mid);
        mergeSort(right, size - mid);
        merge(left, mid, right, size - mid, arr);
    }
}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int arr1[size1];

    printf("Enter %d elements into the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int arr2[size2];

    printf("Enter %d elements into the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    mergeSort(arr1, size1);
    mergeSort(arr2, size2);

    int merged[size1 + size2];
    merge(arr1, size1, arr2, size2, merged);

    printf("Merged and sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}