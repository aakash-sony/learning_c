#include<stdio.h>

int main()
{
    int i=1,num;

    printf("Enter a number:");
    scanf("%d",&num);

    while (i<=num)
    {
        printf("%d ",i);

        i=i+2;
    }

    return 0;
    
}