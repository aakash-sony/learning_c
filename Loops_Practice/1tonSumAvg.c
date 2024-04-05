#include<stdio.h>

int main()
{
    int n,avg,sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum=%d,Avg=%f",sum,(float)sum/n);

}