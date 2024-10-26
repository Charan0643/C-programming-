#include<stdio.h>
void main()
{
	int x,y,max;
	printf("enter two distinct numbers\n");
	scanf("%d%d",&x,&y);
	max=(x>y)?x:y;
	printf("largest number=%d",max);
}
