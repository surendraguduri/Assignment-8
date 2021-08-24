#include<stdio.h>
int sum=0,rem;
int reverse(int num)
{
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      reverse(num/10);
   }
   else
      return sum;
   return sum;
}
int main()
{
   int n,r;

   //User would input the number
   printf("\nEnter any number:");
   scanf("%d",&n);
   r=reverse(n);
   printf("\nAfter reverse the no is :%d",r);
   return 0;
}

