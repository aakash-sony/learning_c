#include <stdio.h>

int main()
{
    int a, b, diff;
    printf("Please Enter The Value of a : ");
    scanf("%d", &a);
    printf("Please Enter The Value of b : ");
    scanf("%d", &b);

    if (a > b)
        diff = a - b;
    else
        diff = b - a;
    printf("The Difference between %d and %d = %d", a, b, diff);
    return 0;
}