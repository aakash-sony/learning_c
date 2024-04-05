#include<stdio.h>
int main()
{
    int n,i,j,a=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        a=i;
        for(j=1;j<=n;j++)
        {
            printf("%d ",a);
            a=a+5;
        }
        printf("\n");
         
    }
    return 0;
}