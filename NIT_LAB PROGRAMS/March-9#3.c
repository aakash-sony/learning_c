#include<stdio.h>

int main()
{
    int num,i=2;

    printf("enter a num:");
    scanf("%d",&num);

    while(i<=num)
    {
        printf("%d ",i);
        i=i+2;
    }
}