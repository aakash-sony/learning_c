#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
       
    }
    if(sum==n)
    {
        printf("Perfect Number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
     return 0;
}