#include<stdio.h>
int main()
{
    int n,i,j,a=1,k;
    printf("Enter a number: ");
    scanf("%d",&n);
    int nsp=n-1;
    
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf("     ");
        }
        nsp--;
        for(j=1;j<=i;j++)
        {
            printf("%5d",a*a);
            a++;
        }
        printf("\n");
    }
     return 0;
}