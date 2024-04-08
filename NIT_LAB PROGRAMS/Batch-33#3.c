#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Please enter the 3 sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    ((a + b) > c) && ((b + c) > a) && ((c + a) > a) && printf("This is a valid triangle.") || printf("This is not a valid triangle.");

    return 0;
}