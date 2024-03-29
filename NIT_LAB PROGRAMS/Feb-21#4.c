#include <stdio.h>

int main()
{
    int years, months, weeks, days, totalDays;

    printf("Please enter age in years: ");
    scanf("%d", &years);

    printf("Please enter age in months: ");
    scanf("%d", &months);

    printf("Please enter age in weeks: ");
    scanf("%d", &weeks);

    printf("Please enter age in days: ");
    scanf("%d", &days);

    totalDays = years*365 + months * 30 + weeks * 7 + days;

    printf("Total days=%d",totalDays);

    return 0;
}