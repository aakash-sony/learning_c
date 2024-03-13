#include <stdio.h>
int main()
{

    float bill = 1200, perPersonPayment;
    int numberOfPeople = 5;

    perPersonPayment = bill / numberOfPeople;

    printf("Per Person Payment=%.2f", perPersonPayment);

    return 0;
}