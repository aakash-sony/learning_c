#include<stdio.h>

int main()
{
    int n,power=1,m,i=1,sum=0;
    printf("Enter Base number: ");
    scanf("%d",&n);
    printf("Enter the power number: ");
    scanf("%d",&m);

    while (m>=i)
    {
        power=power*n;  //2,4,8
        sum=sum+power;  //2,6,14
        i++;
    }
    printf("Sum=%d",sum);

    return 0;
}