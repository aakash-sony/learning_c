#include<stdio.h>
int main()
{
   int i,j,n;
   printf("Enter a number: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       int a=i;
       for(j=1;j<=n;j++)
       {
           if(j>=i)
           {
             printf("%d   ",a);
              a++;
           }
            else
            {
                printf("%d   ",0);
                a++;
            }
       }
       printf("\n");
   }
    return 0;
}