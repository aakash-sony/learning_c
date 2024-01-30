#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is leap year.", year);
    }
    else
    {
        printf("%d is ordinary year.", year);
    }

    return 0;
}