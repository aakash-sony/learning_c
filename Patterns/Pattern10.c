#include<stdio.h>

int main()
{
    int n,i,j,space;

    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",64+j);
        }
        printf("\n");
    }
    printf("\n");                //2 types patterns
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}