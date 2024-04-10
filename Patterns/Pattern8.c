#include<stdio.h>

int main()
{
    int i,n,j,space;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",64+i);
        }
        printf("\n");
    }
    return 0;
}