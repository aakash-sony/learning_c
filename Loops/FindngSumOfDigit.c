#include<stdio.h>

int main()
{
    int n,r,sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum=%d",sum);
    
    return 0;
}