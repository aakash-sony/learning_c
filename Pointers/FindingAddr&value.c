#include<stdio.h>

int main()
{
    int a=100;
    int *p;
    p=&a;
    printf("value of a=%d\n",a);
    printf("address of a=%u\n",p);
    printf("value of p=%d\n",p);
    printf("a value through p=%d",*p);

    return 0;
}