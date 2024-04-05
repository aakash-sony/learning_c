#include<stdio.h>
int main() 
{
    int i,n1,n2,sum=0,fact=1,r,a;
    printf("Enter a starting number and ending Number: ");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        sum=0;
        a=i;
       while(a>0)
       {
           r=a%10;
          while(r!=0)
         {
            fact=fact*r;
            r--;
         }
          sum=sum+fact;
          fact=1;
          a=a/10;
       }
        if(i==sum)
        printf("%d ",sum);
    }
   return 0;    
}