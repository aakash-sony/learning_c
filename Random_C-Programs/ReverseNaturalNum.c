#include<stdio.h>

int main()
{
    int end,start;

    printf("Enter Starting number: ");
    scanf("%d",&start);

    printf("Enter Ending number: ");
    scanf("%d",&end);

    printf("The reverse natural number is: \n");

    for(int i=start;i>=end;i--)
    {
        printf("%d ",i);
    }
}