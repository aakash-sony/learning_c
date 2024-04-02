#include<stdio.h>

void reverseNumber(int a);

int main()
{
    int a=786;
    printf("%d",a%10);
    a=a/10;
    printf("%d%d",a%10,a/10);
    return 0;
}