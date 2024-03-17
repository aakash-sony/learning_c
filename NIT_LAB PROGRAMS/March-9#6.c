#include<stdio.h>
int main()
{
    int num,es=0,os=0,i=1;

    printf("Enter a num: ");
    scanf("%d",&num);

    while(num>=i)
    {
        if(i%2==0)
        {
            es=es+i;
            i++;
        }
        else
        {
            os=os+i;
            i++;
        }
    }
    printf("Even Sum=%d Odd Sum=%d",es,os);

    return 0;
}