#include<stdio.h>
void main()
{
	int i,j,n,temp;
	int a[20];
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the number in unsorted order:\n");
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<(n-1)-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
   }              
printf("the sorted array order is \n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
		
	

