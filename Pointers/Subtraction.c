#include <stdio.h>
void subtractionByValue(int a, int b);
void subtractionByAddress(int *x, int *y);

int main()
{
    int a = 50, b = 30;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    subtractionByValue(*p1, *p2);
    subtractionByAddress(p1, p2);
}
void subtractionByValue(int a, int b)
{
    printf("%d\n", a - b);
}

void subtractionByAddress(int *a, int *b)
{
    printf("%d", *a - *b);
}