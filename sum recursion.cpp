#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sum(int n)
{
	int s=0;
	while(n>0)
	{
		return s=n+sum(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int s=sum(n);
	printf("%d",s);
	return 0;
}
