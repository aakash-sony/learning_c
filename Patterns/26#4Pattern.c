#include<stdio.h>
int main()
{
     int n,i,j,a=1,k;
     printf("Enter a number: ");
     scanf("%d",&n);
     
     for(i=1;i<=n;i++)
     {
         a=i-1;
         for(j=1;j<=i;j++)
         {
           printf("%d ",j);
         }
         for(k=1;k<=i-1;k++)
         {
             printf("%d ",a);
             a--;
          }
         printf("\n");
    }
     
    
    return 0;
}