#include<stdio.h>

int main()
{
    int start,end;
    printf("Enter starting number: ");
    scanf("%d",&start);

    printf("Enter ending number: ");
    scanf("%d",&end);

    printf("The Natural Number from %d to %d is:\n",start,end);

    for(int i=start;i<=end;i++)
    {
        printf("%d ",i);

    }
    return 0;
}