#include <stdio.h>

void main()
{
    int n, i, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            printf("Composite Number.");
            return;
        }
    }
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    for (i = 2; i <= rev/2; i++)
    {
        if (rev % i == 0)
        {
            printf("Not a Twisted Prime.");
            return;
        }
    }

    // if (rev == i)
    printf("Number is twisted Prime.");
}