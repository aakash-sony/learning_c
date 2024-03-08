#include <stdio.h>

int main()
{
    int n, i;
    printf("Please enter the value of n for checking prime number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
        printf("Given number is prime.\n");
    else
        printf("Given number is not prime.");

    return 0;
}