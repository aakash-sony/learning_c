#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value of n :");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
            break;
    }

    if (i == n)
        printf("prime no.");
    else
        printf("not prime no.");

    return 0;
}