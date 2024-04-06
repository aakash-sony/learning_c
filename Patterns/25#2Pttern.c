#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }

return 0;
}