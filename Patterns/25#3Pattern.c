#include<stdio.h>
int main()
{
    int n,i,j,a=1,b=1,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",a);
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("\n");
    }

return 0;
}