#include <stdio.h>

void sumOfNumbers(int a, int b);
void sumOfNumbersByAddress(int *x, int *y);
int main()
{
    int a = 12, b = 50;
    int *p1, *p2;
    // printf("%d %p\n",*p1, p1);  //wild pointer
    p1 = &a;
    p2 = &b;
    // printf("%d %p\n",a, &a);
    // printf("%d %p\n",b, &b);
    // printf("%d %p\n",*p1, p1);
    // printf("%d %p\n",*p2, p2);
    sumOfNumbers(*p1, *p2); // the parameter is function callibg is called actual parameter, in defination it is call formal params
    sumOfNumbersByAddress(p1, p2);
    return 0;
}
void sumOfNumbers(int a, int b) // Call by value
{
    printf("%d", a + b);
}

void sumOfNumbersByAddress(int *a, int *b) // Call by address/reference
{
    printf("%d", (*a + *b));
}