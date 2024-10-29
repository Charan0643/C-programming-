#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10];
	int rollno;
	float percentage;
    printf("enter student name");
	scanf("%s",&name);
	printf("enter student roll number");
	scanf("%d",&rollno);
	printf("enter student percentage");
	scanf("%f",&percentage);
	printf("STUDENT INFORMATION\n");
	printf("\nNAME:%s",name);
	printf("\nRollno:%d",rollno);
	printf("\nPERCENTAGE:%f",percentage);
	getch();
}
	
	
	


