#include <stdio.h>

void naturalNumber(int num);

int main()
{
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);

    naturalNumber(num);

    return 0;
}

void naturalNumber(int num)
{
    int i = 1;
 a:
    if (num >= i)
    {
        printf("%d ", i);

        i++;

        goto a;
    }
}