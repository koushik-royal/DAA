#include <stdio.h>
int isPerfect(int num)
{
    int sum = 1;
    for (int i = 2; i * i <= num; i++)
	{
        if (num % i == 0)
		{
            if (i * i != num)
			{
                sum = sum + i + num / i;
            }
			else
			{
                sum = sum + i;
            }
        }
    }
    if (sum == num && num != 1)
	{
        return 1;
    }
	else
	{
        return 0;
    }
}
void printPerfectNumbers(int n)
{
    int count = 0;
    int num = 2;
    printf("The first %d perfect numbers are:\n", n);
    while (count < n)
	{
        if (isPerfect(num))
		{
            printf("%d\n", num);
            count++;
        }
        num++;
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printPerfectNumbers(n);
    return 0;
}
