#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n); 
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        if(i%3==0)
        {
            printf("%d ",3*i);
        }
    }
    return 0;
}