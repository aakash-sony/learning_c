#include<stdio.h>
int main()
{
    int n,j,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",(n*j)-(i-1));
        }
        printf("\n");
     
    }
    return 0;
}