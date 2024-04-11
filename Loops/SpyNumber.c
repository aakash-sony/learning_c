#include<stdio.h>
int main()
{
    int n,r,sum=0,prod=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    if(sum==prod)
    {
        printf("It is a spy number.");
    }
    else
    {
        printf("Not a Spy Number.");
    }
    
    return 0;
}