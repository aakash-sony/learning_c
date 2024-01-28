#include <stdio.h>
int addNum(int a, int b);
int subtractNum(int a, int b);
int multiplyNum(int a, int b);
int getAverage(int a, int b);
void printTable(int a);

void main()
{
    int a, b;
    printf("Please enter two numbers two perform arithmetic calculations: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", addNum(a, b));
    printf("Subtraction is: %d\n", subtractNum(a, b));
    printf("Product is: %d\n", multiplyNum(a, b));
    printf("Average: %d\n\n", getAverage(a, b));
    printTable(a);
    printTable(b);
}

int addNum(int a, int b)
{
    return a + b;
}

int subtractNum(int a, int b)
{
    return (a - b);
}

int multiplyNum(int a, int b)
{
    return (a * b);
}

int getAverage(int a, int b)
{
    return addNum(a, b) / 2;
}

void printTable(int a)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n\n", a, i, multiplyNum(a, i));
    }
}