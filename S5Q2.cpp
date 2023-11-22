#include <stdio.h>
#include <stdlib.h>
long long fact(int n)
{
    if (n == 0)
	{
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
	{
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1;
    }
    printf("Factorial of %d: %lld\n", n, fact(n));
    return 0;
}
