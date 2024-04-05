#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d%c+",i,253,sum+=i*i);
    }
    printf("\b=%d",sum);
    return 0;
}