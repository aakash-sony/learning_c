#include<stdio.h>
int main()
{
    int n,m,*p=&n,*q=&m;
    printf("Enter two number: ");
    scanf("%d%d",&n,&m);

    if(n>m)
    {
        printf("%d is Maximum",n);
    }
    else
    {
        if(n<m)
        {
            printf("%d is Maximum",m);
        }
        else
        {
            printf("Both are Equal.");
        }
    }

    return 0;
}