#include<stdio.h>
int main()
{
    int n,i,fact=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("Sum=%d",sum);
 
    
    return 0;
}