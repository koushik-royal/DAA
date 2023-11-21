#include<stdio.h>
int main()
{
	int n,temp,r,sum=0;
	printf("enter a number ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("given number is an armstrong",n);
	}
	else
	{
		printf("given number is not an armstrong",n);
	}
}