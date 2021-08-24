#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i;
	FILE *p;
	p=fopen("filecreationprogram.c","r");
	if(p==NULL)
	{
		printf("This file doesn't exist.");
		
	}
	else
	{
		printf("The file is opened.\n");
		while(fgets(a,100,p)!=NULL)
		{
			printf("%s",a);
		}
	}
	fclose(p);
	return 0;
}
