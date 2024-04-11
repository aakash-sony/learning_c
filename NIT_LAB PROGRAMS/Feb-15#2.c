#include<stdio.h>

int main()
{
    int second,minute,hour;

    printf("Enter the value in second: ");
    scanf("%d",&second);

    hour=second/(60*60);
    minute=second/60;
    printf("second=%d minutes=%d hour=%d",second,minute,hour);
    return 0;
}