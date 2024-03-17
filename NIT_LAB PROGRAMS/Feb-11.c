#include <stdio.h>

void swapNumwithThirdVariable(int a, int b);
void swapNumWithoutThirdVariable(int a, int b);
void addNumWithoutPlusOperator(int a, int b);

int main()
{
    int a, b;
    swapNumwithThirdVariable(a, b);
    swapNumWithoutThirdVariable(a, b);
    addNumWithoutPlusOperator(a,b);
    return 0;
}

void swapNumwithThirdVariable(int a, int b)
{
    int c;
    printf("Please enter a= ");
    scanf("%d", &a);
    printf("Please enter b= ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    printf("After swapping the number is a=%d , b=%d\n", a, b);
}

void swapNumWithoutThirdVariable(int a, int b)
{
    printf("Please enter a= ");
    scanf("%d", &a);
    printf("Please enter b= ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swaapping the number is a=%d , b=%d\n", a, b);
}

void addNumWithoutPlusOperator(int a, int b)
{
    int add;
    printf("Please enter a= ");
    scanf("%d", &a);
    printf("Please enter b= ");
    scanf("%d", &b);

    add = a - (-b);
    printf("After adding the given number is %d\n", add);
}
