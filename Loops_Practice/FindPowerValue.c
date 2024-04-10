#include<stdio.h>

int main()
{
    int n,m,power=1,i=1;
    printf("Enter base number:");
    scanf("%d",&n);
    printf("Enter power number: ");
    scanf("%d",&m);
    while(m>=i)
    {
        power=power*n;
        i++;
    }
    printf("Power=%d",power);

}