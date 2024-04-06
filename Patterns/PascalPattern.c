#include <stdio.h>
int main()
{
    int n, r, c, s, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (r = 0; r < n; r++)
    {
        for(s=1;s<n-r;s++)
        {
            printf(" ");
        }
        for(c = 0; c <= r; c++)
        {
            if (c == 0 || c == r)
            {
                printf("%d ", 1);
                a = 1;
            }
            else
            {
                a = a * (r - c + 1) / c;
                printf("%d ", a);
            }
        }
        printf("\n");
    }
    return 0;
}