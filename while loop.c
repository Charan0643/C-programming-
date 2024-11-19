#include<stdio.h>
void main()
{
	int n,fact;
	printf("enter a number:\n");
	scanf("%d",&n);
	fact=1;
	while (n>0)
{
	fact=fact*n;
	--n;
}
printf("factorial=%d",fact);
}

