#include<stdio.h>

int main()
{
   int n,sum;
   printf("Please enter the value of n: ");
   scanf("%d",&n);

   sum=n*(n+1)/2;

   printf("The sum of Numbers is=%d",sum);
   return 0;
}