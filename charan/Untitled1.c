#include<stdio.h>
void main()
{
	int a=7,b=6,c,d;
	c=a+b;
	d=a*b;
	c=a+(--b)+a;
	d=(a++)/b*2;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%d\n",d);
	
}
