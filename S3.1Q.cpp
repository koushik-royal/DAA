#include <stdio.h>
#include <stdlib.h>
int search(int nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
	{
        if (nums[i] == target)
		{
            return i;  
        }
    }
    return -1;  
}
int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
	{
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target integer: ");
    scanf("%d", &target);
    int result = search(nums, n, target);
    if (result != -1)
	{
        printf("Element found at index %d\n", result);
    } 
	else
	{
        printf("Element not found in array\n");
    }

    return 0;
}