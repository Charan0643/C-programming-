#include<stdio.h>
void main()
{
	int i;
	int j=10;
	for(i=1;i<=j;i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("hello%d\n",i);
	}
}
