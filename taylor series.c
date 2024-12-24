#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float x,t,sum;
	printf("enter the angle\n");
	scanf("%f",&x);
	x=(x*3.1428/180.0);
	sum=x;
	t=x;
	i=1;
	do
	{
		i=i+2;
		t=(-t*x*x)/((i-1)*i);
		sum=sum+t;
}
while(fabs(t)>0.00005);
printf("sin(%f) using taylor series=%f\n",sum);
printf("using inbuilt function sin(%f)=%f",sin(x));
}
