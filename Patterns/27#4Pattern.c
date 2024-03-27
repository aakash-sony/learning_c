#include<stdio.h>
int main()
{
    int n,a=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a++);
        }
        printf("\n"); 
    }
       
    return 0;
}