#include <stdio.h>
#include <stdbool.h>

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isEven(n))
        printf("Number is Even.");
    else
        printf("Number is Odd.");
    return 0;
}