#include <stdio.h>
int findMax(int nums[], int start, int end)
{
    int max;
    if (start == end)
	{
        return nums[start];
    }
	else
	{
        int mid = (start + end) / 2;
        int max1 = findMax(nums, start, mid);
        int max2 = findMax(nums, mid + 1, end);
        if (max1 > max2)
		{
            max = max1;
        }
		else
		{
            max = max2;
        }
    }
    return max;
}
int findMin(int nums[], int start, int end)
{
    int min;
    if (start == end)
	{
        return nums[start];
    }
	else
	{
        int mid = (start + end) / 2;
        int min1 = findMin(nums, start, mid);
        int min2 = findMin(nums, mid + 1, end);
        if (min1 < min2)
		{
            min = min1;
        }
		else
		{
            min = min2;
        }
    }
    return min;
}
int main()
{
    int n;
    printf("Enter the size of the list: ");
    scanf("%d", &n);
    if (n <= 0)
	{
        printf("Illegal input! The size of the list must be a positive number.\n");
        return 1;
    }
    int nums[n];
    printf("Enter the elements of the list: ");
    for (int i = 0; i < n; i++)
	{
        scanf("%d", &nums[i]);
        if (nums[i] < -1000000000 || nums[i] > 1000000000)
		{
            printf("Illegal input! \n");
            return 1;
        }
    }
    int max_val = findMax(nums, 0, n - 1);
    int min_val = findMin(nums, 0, n - 1);
    printf("Min value in the list is: %d\n", min_val);
    printf("Max value in the list is: %d\n", max_val);
    return 0;
}