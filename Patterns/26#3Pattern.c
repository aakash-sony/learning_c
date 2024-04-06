#include <stdio.h>
int main()
{
    int i, j, n, a = 1, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    int nsp = n - 1;
    for (i = 1; i <= n; i++)
    {
        a = i;
        for (k = 1; k <= nsp; k++)
        {
            printf("   ");
        }
        nsp--;
        for (j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                printf("%3d", a);
                a = a + i;
            }
            else
            {
                printf("%3d", i * j);
            }
        }
        printf("\n");
    }
    return 0;
}