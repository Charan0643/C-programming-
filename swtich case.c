#include<stdio.h>
void main()
{
char grade='a';
switch(grade)
{
case 'a':
	printf("excellent\n");
	break;
case 'b':
case 'c':
	printf("well done\n");
	break;
case 'd':
	printf("you passed\n");
	break;
case 'f':
	printf("better try again\n");
default:printf("invalid grade");
}
}
