#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *p1,*p2;
	char a[100];
	char c;
	p1=fopen("filecreationprogram.c","r");
	p2=fopen("f2.c","w");
	if(p1==NULL || p2==NULL)
	{
		printf("The file doesn't exist.\n");
	}
	else
	{
		c=fgetc(p1);
		while(c!=EOF)
		{
			fputc(c,p2);
			c=fgetc(p1);
		}
	}
	fclose(p1);
	fclose(p2);
	return 0;
}
