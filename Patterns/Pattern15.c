#include<stdio.h>

int main()
{
    int i,j,n,a=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}