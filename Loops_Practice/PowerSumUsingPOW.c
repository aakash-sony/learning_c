#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, sum = 0;

    printf("Enter the base number: ");
    scanf("%d", &n);
    printf("Enter the power number: ");
    scanf("%d", &m);

    while (m != 0)
    {
        sum = sum + pow(n, m);
        m--;
    }
    printf("Sum of Power=%d", sum);
    return 0;
}