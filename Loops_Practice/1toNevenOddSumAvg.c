#include<stdio.h>

int main()
{
    int n,es,os;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            es=es+i;
        }
        else
        {
            os=os+i;
        }
    }
    printf("Sum of Even=%d Sum of Odd=%d",es,os);
    return 0;

}