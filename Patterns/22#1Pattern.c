#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter a Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if((i+j)%2==0)
            {
                printf("%d ",0);
            }
            else
            {
                printf("%d ",1);
            }
        }
        printf("\n");
    }
    return 0;
    
}