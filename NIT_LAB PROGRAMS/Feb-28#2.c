#include <stdio.h>

int main()
{
   int a,b;
   
   printf("Enter Two numbers: ");
   scanf("%d %d",&a,&b);
   if(a==b)
   {
       printf("Both numbers are equal.");
   }
   if(a!=b)
   {
       printf("Both numbers are not equal.");
   }

return 0;
}