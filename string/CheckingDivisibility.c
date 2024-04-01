#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    (a % b == 0) && printf("%d is divisible by %d", a, b);
    (a % b != 0) && printf("%d is not divisible by %d", a, b);

    return 0;
}