#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *p1,*p2;
	char c1,c2;
	p1=fopen("filecreationprogram.c","r");
	p2=fopen("f2.c","r");
	
	if(p1==NULL)
	{
		printf("The first file is empty.\n");
		exit(1);
	}
	else if(p2==NULL)
	{
		printf("The second file is empty.\n");
		exit(1);
	}
	else
	{
		c1=getc(p1);
		c2=getc(p2);
		while((c1!=EOF)&&(c2!=EOF)&&(c1==c2))
		{
			c1=getc(p1);
			c2=getc(p2);
		}
		if(c1==c2)
		{
			printf("The files are identical.\n");
		}
		else
		{
			printf("The files are not identical.");
		}
	}
	fclose(p1);
	fclose(p2);
	return 0;
}
