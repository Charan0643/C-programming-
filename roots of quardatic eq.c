#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float a,b,c,d,r1,r2;
	//clrscr();
	printf("enter the 3 coeffcients:\n");
	scanf("%f%f%f",&a,&b,&c);
	if((a,b,c)==0)
	{
		printf("roots cannot be determined:\n");
		//exit(0);
}
d=(b*b)-(4*a*c);
if(d==0)
{
	printf("roots are real and equal\n");
	r1=r2=-b/(2*a);
	printf("the roots are %f and %f",r1,r2);
	
}
else
{
	printf("roots are imaginary\n");
	r1=-b/(2*a);
	r2=sqrt(fabs(d))/(2*a);
	printf("the roots are %f+i%.f",r1,r2);
	printf("the roots are %f+i%",r1,r2);
}
getch();
}

