#include <stdio.h>
void divisionByValue(int a, int b);
void divisionByAddress(int *x, int *y);

int main()
{
    int a = 50, b = 30;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    divisionByValue(*p1, *p2);
    divisionByAddress(p1, p2);
}
void divisionByValue(int a, int b)
{
    printf("%f\n", (float)a / b);
}

void divisionByAddress(int *a, int *b)
{
    printf("%f", (float)*a / *b);
}