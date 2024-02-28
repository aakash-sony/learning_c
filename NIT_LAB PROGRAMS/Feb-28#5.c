#include <stdio.h>

int main()
{
    int hour;

    printf("Enter the hour(24-hour formet): ");
    scanf("%d", &hour);

    if (hour >= 4 && hour <= 12)
    {
        printf("Morning.");
    }
    if (hour > 12 && hour <= 15)
    {
        printf("Afternoon");
    }
    if (hour > 15 && hour <= 19)
    {
        printf("Evening");
    }
    if (hour > 19 && hour <= 24)
    {
        printf("Night");
    }
    if (hour > 24)
    {
        printf("Invalid hours");
    }

    return 0;
}