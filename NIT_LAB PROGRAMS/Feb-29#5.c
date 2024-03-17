#include <stdio.h>

int main()
{
    int hours, minutes;

    printf("Enter the hours: ");
    scanf("%d", &hours);

    printf("Enter the minutes: ");
    scanf("%d", &minutes);

    if (hours >= 12 && hours <= 23)
    {
        hours = hours - 12;
        printf("The time is %d:%d PM.", hours, minutes);
    }
    else
    {
        if (hours == 24 && minutes < 60)
            printf("The time is 12:%d AM.", minutes);

        if (hours > 0 && hours < 12 && minutes < 60)
            printf("The time is %d:%d AM", hours, minutes);
    }

    return 0;
}