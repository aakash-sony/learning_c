#include <stdio.h>

int main()
{
    int ch, teaCups, coffeeCups, coldCoffee, ttl_Bill, amt;
    int change, rm_amt;
    char choice;

    printf("*******Welcome to our Tea Stall Counter!*******\n");
menu:
    printf("**********Our Menu***********\n");
    printf("Tea-----------Rs.10\n");
    printf("Coffee--------Rs.20\n");
    printf("Cold coffee----Rs.50\n");
    printf("Exit\n");
start:
    printf("Please enter a number(1-4) for select one.");
    scanf("%d", &ch);

    if (ch > 0 && ch <= 4)
    {
        if (ch == 1)
        {
        again:
            printf("How many cups of refreshing tea?: ");
            scanf("%d", &teaCups);

            if (teaCups > 0)
            {
                ttl_Bill = 10 * teaCups;
                printf("Total Bill=%d", ttl_Bill);

                printf("\nEnter your payment amount: ");
                scanf("%d", &amt);


                change = amt - ttl_Bill;
                printf("Change=%d", change);

           
                
                     change = amt - ttl_Bill;
                     printf("Change=%d", change);

            }
            else
            {
                printf("Sorry! please check your input.\n");
                goto again;
            }
        }
        else if (ch == 2)
        {
        check:
            printf("How many cups of aromatic coffee??: ");
            scanf("%d", &coffeeCups);

            if (coffeeCups > 0)
            {
                ttl_Bill = 20 * coffeeCups;
                printf("Total Bill=%d", ttl_Bill);

                printf("\nEnter your payment amount: ");
                scanf("%d", &amt);

                change = amt - ttl_Bill;
                printf("Change=%d", change);
            }
            else
            {
                printf("Sorry! please check your input.\n");
                goto check;
            }
        }
        else if (ch == 3)
        {
        retry:
            printf("How many cups of chilled cold coffee??: ");
            scanf("%d", &coldCoffee);
            if (coldCoffee > 0)
            {

                ttl_Bill = 50 * coldCoffee;
                printf("Total Bill=%d", ttl_Bill);

                printf("\nEnter your payment amount: ");
                scanf("%d", &amt);

                change = amt - ttl_Bill;
                printf("Change=%d", change);
            }
            else
            {
                printf("Sorry! please check your input.\n");
                goto retry;
            }
        }

        else
        {
            printf("Ok Thank you for visiting!We look forward to serving you again soon!");
        }

        printf("\nExplore more or finalize?(Type y for yes and n for no.)");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            printf("Certainly! Let's Explore.\n");
            goto menu;
        }
        else
        {
            printf("Thank you for visiting.");
        }
    }
    else
    {
        printf("Please choose correct option.\n");
        goto start;
    }

    return 0;
}