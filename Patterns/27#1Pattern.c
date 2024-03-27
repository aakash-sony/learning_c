#include<stdio.h>
int main()
{
   int n,i,j,a=1;
   printf("Enter the number: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n-2;j++)
       {
           if(i%2!=0)
           {
             printf("%d ",a++);
           }
           else
           {
             printf("%d ",--a);
           }
       }
       a+=3;  
      
      printf("\n");
   }
     return 0;
}