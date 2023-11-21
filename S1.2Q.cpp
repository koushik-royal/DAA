#include <stdio.h>
int binarySearchUnsorted(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high) 
	{
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) 
		{
            return mid;
        }
        if (arr[low] <= arr[mid]) 
		{
            if (target >= arr[low] && target < arr[mid]) 
			{
                high = mid - 1;
            }
			else 
			{
                low = mid + 1;
            }
        }
        else 
		{
            if (target > arr[mid] && target <= arr[high]) 
			{
                low = mid + 1;
            } 
			else 
			{
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int result = binarySearchUnsorted(arr, size, target);
    if (result != -1) 
	{
        printf("Found in the position %d\n", result);
    } else {
        printf("Not found\n");
    }
    return 0;
}