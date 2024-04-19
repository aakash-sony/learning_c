#include <stdio.h>

double squareOfNum(double num)
{
    double square;
    square = num * num;
    return square;
}

int main()
{
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    double sq = squareOfNum(n);
    printf("Square=%.2lf", sq);
    return 0;
}