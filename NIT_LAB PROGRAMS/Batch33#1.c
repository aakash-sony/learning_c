#include<stdio.h>
int main()
{
   int a,b;
   printf("Please enter two number: ");
   scanf("%d%d",&a,&b);

   printf("Sum=%d\n",a+b);
   printf("Sub=%d\n",a-b);
   printf("Multiply=%d\n",a*b);
   printf("Division=%f\n",(float)a/b);
   printf("Mod=%d",a%b);

   return 0;
}