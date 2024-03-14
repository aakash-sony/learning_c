#include <stdio.h>
#include <time.h>

int main()
{
    char name[25], date_string[9], time_string[9];
    int consumerID, fixCharge = 50, struct_tm;
    float perUnitCharge = 3.5, consumedUnit, surcharge1, surcharge2, totalSurcharge, extraUnit1, extraUnit2;
    time_t current_time;
    struct tm *local_time;

    printf("Enter the consumer name: ");
    scanf("%s", name);

    printf("Enter the consumer ID: ");
    scanf("%d", &consumerID);

    printf("Enter the consumed units: ");
    scanf("%f", &consumedUnit);

    current_time = time(NULL);
    local_time = localtime(&current_time);
    strftime(date_string, sizeof(date_string), "%d-%m-%y", local_time);
    strftime(time_string, sizeof(time_string), "%H:%M:%S", local_time);

    printf("\n********Electricity Bill*********\n");

    printf("Consumer Name: %s\n\n", name);
    printf("Consumer ID: %d\n\n", consumerID);
    printf("total consumed unit=%.2f\n\n", consumedUnit);
    printf("Date:  %s\n", date_string);
    printf("Time: %s\n", time_string);

    if (consumedUnit < 10)
    {
        printf("You have consumed less than 10 units so you have to pay fixed charge= %d RS.\n", fixCharge);
    }

    else if (consumedUnit >= 10 && consumedUnit <= 200)
    {
        printf("Total Surcharge is= 0.00 RS\n\n");
        printf("total Bill Charge= %.2f RS\n.", consumedUnit * 3.5);
    }
    else if (consumedUnit > 200 && consumedUnit <= 400)
    {
        extraUnit1 = consumedUnit - 200;
        surcharge1 = extraUnit1 * 3.5 * 5 / 100;

        printf("Extra Unit above 200 is %.2f\n\n", extraUnit1);
        printf("Surcharge on extra units is= %.2f RS.\n\n", surcharge1);
        printf("Total Bill Charge= %.2f RS.", consumedUnit * 3.5 + surcharge1);
    }
    else
    {
        extraUnit1 = consumedUnit - 200;
        extraUnit2 = consumedUnit - 400;

        surcharge1 = extraUnit1 * 3.5 * 5 / 100;
        surcharge2 = extraUnit2 * 3.5 * 10 / 100;

        totalSurcharge = surcharge1 + surcharge2;

        printf("Extra Unit above 200 is= %.2f\n\n", extraUnit1);
        printf("Surcharge on Extra unit is= %.2f\n\n", totalSurcharge);
        printf("Total Bill Charge= %.2f RS.", consumedUnit * 3.5 + totalSurcharge);
        
    }

    return 0;
}