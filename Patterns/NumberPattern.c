#include<stdio.h>
int main()
{
    int n,r,c,s;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(s=1;s<=n-r;s++)
        {
            printf("  ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%d ",c);
        }
        for(c=r-1;c>=1;c--)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    return 0;
}