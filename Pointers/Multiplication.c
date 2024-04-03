#include<stdio.h>
void multiplyByValue(int a,int b);
void multiplyByAddress(int *x,int* y);
int main()
{
    int a=12,b=20;
    int* p1,*p2;
    p1=&a;
    p2=&b;
    multiplyByValue(*p1,*p2);
    multiplyByAddress(p1,p2);

}
void multiplyByValue(int a,int b)
{
    printf("%d",a*b);
}

void multiplyByAddress(int *a,int *b)
{
     printf("%d",(*a)*(*b));
}