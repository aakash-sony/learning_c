#include<stdio.h>

int main()
{
    int n,sum,a=0,b=1;
    printf("Please enter the value of n for printing fibonacci number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a);
        sum=a+b;
        a=b;
        b=sum;
    }
     return 0;


}