#include<stdio.h>

int main()
{
    int n,i,sum1=0,sum2=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d-",i,sum1+=i);
        }
        if(i%2==0)
        {
            printf("%d+",i,sum2+=i);
        }
    }
    printf("\b=%d",(sum1-sum2));
    return 0;
}