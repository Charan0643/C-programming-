#include<stdio.h>
void main()
{
	int n[10];
	int i;
	printf("enter the value for roll no");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);		
	}
	for(i=0;i<10;i++)
	{
		printf("%d",n[i]);
	}
}
