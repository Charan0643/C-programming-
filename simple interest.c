#include<stdio.h>
#include<conio.h>
void main()
{
	int p,n,r;
	float si;
	printf("\t enter values for p,n,r");
	scanf("%d%d%d",&p,&n,&r);
	si=(p*n*r)/100;
	printf("SIMPLE INTEREST= Rs%f\n",si);
	getch();
}
