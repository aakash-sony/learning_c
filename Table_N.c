#include <stdio.h>

int main()
{
    int n, i;
    printf("Provide the number for printing Table : ");
    scanf("%d", &n);

    for (i = n; i <= n * 10; i++)
    {
        printf("%d ", i);
        i = i + n - 1;
    }

    return 0;
}