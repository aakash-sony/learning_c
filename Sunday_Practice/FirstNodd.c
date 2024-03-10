#include<stdio.h>

void firstNOdd(int n);

int main()
{
    int n;
    printf("Enter a num: ");
    scanf("%d",&n);

    firstNOdd(n);

    return 0;
}

void firstNOdd(int n)
{
    for(int i=1;i<=2*n-1;i++)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
}
