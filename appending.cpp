#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100];
	gets(a);
	FILE *p;
	int i=0;
	p=fopen("filecreationprogram.c","a");
	if(p==NULL)
	{
		printf("The file is doesn't exist.'");
	}
	else
	{
		printf("The file is open.\n");
		if(strlen(a)>0)
		{
			fputs(a,p);
			fputs("\n",p);
		}
	}
	
	fclose(p);
	return 0;
	
}
