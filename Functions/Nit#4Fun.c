#include <stdio.h>

// Function to find the maximum of three numbers
int maxNum(int num1, int num2, int num3)
{
    if (num1 == num2 && num1 == num3)
    {
        printf("All numbers are same.");
    }
    else if (num1 > num2 && num1 > num3)
    {
        printf("%d is biggest.", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is biggest.", num2);
    }
    else
    {
        printf("%d is biggest.", num3);
    }

    return 0;
}
int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d%d%d", &a, &b, &c);
    maxNum(a, b, c);

    return 0;
}