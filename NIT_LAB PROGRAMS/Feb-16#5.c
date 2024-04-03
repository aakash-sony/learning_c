#include<stdio.h>

int main()
{
   int n,firstdigit,lastdigit,result;
   printf("Please enter 4 digit number: ");
   scanf("%d",&n);

   lastdigit=n%10;
   firstdigit=n/1000;
   result=lastdigit*1000+n%1000-n%10+firstdigit;

   printf("After Swapping the number is=%d",result);

}