#include<stdio.h>
#include<conio.h>
struct student
{
	char usn[10];
	char name[10];
	float m1,m2,m3;
	float avg,total;
};
void main()
{
	struct student s[20];
	int n,i;
	float avg,sum=0.0;
	printf("enter the number of student=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number of student\n",i+1);
		printf("\n enter usn=");
		scanf("%s",s[i].usn);
		printf("\n enter name=");
		scanf("%s",s[i].name);
		printf("enter the three subject score\n");
		scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
		s[i].total=s[i].m1+s[i].m2+s[i].m3;
		s[i].avg=s[i].total/3;
	}
	for(i=0;i<n;i++)
	{
		if(s[i].avg>=35)
		printf("\n %s has scored above the average marks",s[i].name);
		else
		printf("\n %s has scored below the average marks",s[i].name);
			}
	}
