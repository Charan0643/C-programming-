#include<stdio.h>
#include<conio.h>
void main()
{
	FILE*fp1,*fp2;
	char ch,sfile[10],dfile[10];
	printf("enter the source file\n");
	gets(sfile);
	printf("enter the destination file\n");
	gets(dfile);
	fp1=fopen(sfile,"r");
	fp2=fopen(dfile,"w");
	if(fp1==NULL||fp2==NULL)
	printf("file does not exists");
	else
	{
		while((ch=fgetc(fp1))!=EOF)
		fputc(ch,fp2);
		printf("file copied\n");
	}
}
