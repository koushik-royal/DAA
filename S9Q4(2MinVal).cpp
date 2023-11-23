#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min1 = INT_MAX;
    int min2 = INT_MAX; 

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    if (min2 == INT_MAX) {
        printf("There are less than two distinct elements in the array.\n");
    } else {
        printf("The first minimum value is: %d\n", min1);
        printf("The second minimum value is: %d\n", min2);
    }

    return 0;
}
