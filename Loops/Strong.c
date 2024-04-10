#include<stdio.h>
int main()
{
    int n,m,fact=1,sum=0,r;
    printf("Enter a number:");
    scanf("%d",&n);
    
    m=n;
    while(n!=0)
    {
        fact=1;
        r=n%10;
        while(1<=r)
        {
          fact=fact*r;
          r--;
        }
        sum=sum+fact;
        
         n=n/10;
        
    }
    if(sum==m)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number.");
    }
    return 0;
}