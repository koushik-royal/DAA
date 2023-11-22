#include <stdio.h>
#include <stdbool.h>
bool is_perfect_number(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
	{
        if (n % i == 0)
		{
            sum += i;
        }
    }
    return sum == n;
}
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (is_perfect_number(n))
	{
        printf("True.\n", n);
    }
	else
	{
        printf("False.\n", n);
    }
    return 0;
}
