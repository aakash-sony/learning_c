#include<stdio.h>

int main()
{
    int n1,n2,i,j;
    printf("Enter the starting number to printing the Table: ");
    scanf("%d",&n1);
    printf("Enter the ending number: ");
    scanf("%d",&n2);

    for(i=n1;i<=n2;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}