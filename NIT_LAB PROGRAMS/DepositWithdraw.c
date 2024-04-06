#include <stdio.h>

int main()
{
    float amount, balance = 2000;
    char cd;
check:
    printf("Enter the character(d for deposit and w or withdraw): ");
    scanf("%c", &cd);
    switch (cd)
    {
    case 'd':
    case 'D':
    again:
        printf("How much amount do you want to deposit: ");
        scanf("%f", &amount);
        if (amount > 0)
        {
            balance = balance + amount;
            printf("Total Balance=%.2f", balance);
            break;
        }
        else
        {
            printf("Invalid Amount.\n");
            goto again;
        }
    case 'w':
    case 'W':
    start:
        printf("How much amount do u want to withdraw: ");
        scanf("%f", &amount);
        if (amount > 0)
        {
            balance = balance - amount;
            printf("Total Balance=%.2f", balance);
            break;
        }
        else
        {
            printf("Invalid Amount.\n");
            goto start;
        }
    default:
        printf("Invalid Option.\n");
        goto check;
    }
    return 0;
}