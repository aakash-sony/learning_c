#include<stdio.h>

int main()
{
    int num,i=1,sum=0;
    printf("Enter a num: ");
    scanf("%d",&num);

    while(num>=i)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum=%d avg=%.2f",sum,(float)sum/num);

   return 0;
}