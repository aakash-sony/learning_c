#include <stdio.h>

 main()
{
    int i, n;

    printf("enter a no.:");
    scanf("%d", &n);
    for (i = 1; i <= 2 * n - 1; i++)
    {
        printf("%d ", i);
        i = i + 1;
    }
    
}