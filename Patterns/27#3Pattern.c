#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("%d ",a++);
            }
        }
        printf("\n");
    }
    
return 0;
}