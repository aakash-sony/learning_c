#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a num: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
          
            printf("%d-",sum+i);
        }
        else
        {
            printf("%d+",sum-i);
        }
        printf("sum=%d",sum);
    }
    return 0;
}