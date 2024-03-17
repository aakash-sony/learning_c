#include <stdio.h>

int main()
{
   int a,b;
   
   printf("Enter Two Numbers: ");
   scanf("%d%d",&a,&b);
   
   if(a%b==0)
   {
       printf("%d is Divisible by %d",a,b);
   }
   else
   {
       printf("%d is not Divisble by %d",a,b);
   }
    return 0;
}