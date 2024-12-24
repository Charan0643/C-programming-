//lab program 5: implement binary search on integers
#include<stdio.h>
main(void)
{
	int n,a[100],i,key,high,low,mid,loc=-1;
	printf("Enter the size of an array\n");
	scanf("%d",&n);
	printf("Enter the elements in sorted order\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the key elements to be searched\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low<=high)/2;
		if(key==a[mid])
		{
			loc=mid+1;
			break;
		}
		else
		{
			if(key<a[mid])
			high=mid-1;
			else
			low=mid+1;
		}
	}
	if(loc>0)
	printf("\n the element %d is found at %d",key,loc);
	else
	printf("\n the search is unsuccesssful");
}
