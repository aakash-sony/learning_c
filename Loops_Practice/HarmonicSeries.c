#include<stdio.h>

int main()
{
    int n,i;
    float sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d+",1);
    sum=sum+1;
    for(i=1;i<=n;i++)
    {
        printf("1/%d+",i,sum+=1.0/i);
    }
    printf("\b=%.2f",sum);

    return 0;
}