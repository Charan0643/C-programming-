#include<stdio.h>
#include<string.h>
void lenght(char s1[50]);
void concat(char s1[50],char s2[50]);
void compare(char s1[50],char s2[50]);
void main()
{
	char a[50],b[50];
	printf("enter the first string\n");
	scanf("%s",a);
	printf("enter the second string\n");
	scanf("%s",b);
	lenght(a);
	concat(a,b);
	compare(a,b);
}
void lenght(char s1[50])
{
	int len;
	len=strlen(s1);
	printf("\n the lenght of string=%d");
}
void concat(char s1[50],char s2[50])
{
	strcat(s1,s2);
	printf("\n concatenate string=%s",s1);
}
 void compare(char s1[50],char s2[50])
{
	int i;
	i=strcmp(s1,s2);
	if(i==0)
	printf("\n string are equal\n");
	else
	printf("\n string are not equal\n");
}

