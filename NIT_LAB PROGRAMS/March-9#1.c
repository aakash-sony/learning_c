#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter the num.");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%3d", i);
        i++;
    }

    return 0;
}