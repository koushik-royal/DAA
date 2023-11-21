#include <stdio.h>
void getSubset(int *s, int n, int *current, int sum, int totalSum, int count, int index) 
{
    if (sum == totalSum) 
	{
        printf("Subset is (");
        for (int i = 0; i < count; i++) 
		{
            printf("%d ", current[i]);
        }
        printf(") Sum is %d\n", totalSum);
    }
    if (index < n) 
	{
        current[count] = s[index];
        getSubset(s, n, current, sum + s[index], totalSum, count + 1, index + 1);
        getSubset(s, n, current, sum, totalSum, count, index + 1);
    }
}
int main() 
{
    int s[100], n, totalSum;
    printf("Enter the size of the set: ");
    scanf("%d", &n);
    printf("Enter the elements of the set: ");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &s[i]);
    }
    printf("Enter the value of the total sum: ");
    scanf("%d", &totalSum);
    int current[100];
    getSubset(s, n, current, 0, totalSum, 0, 0);
    return 0;
}