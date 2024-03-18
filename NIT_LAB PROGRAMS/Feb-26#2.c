#include <stdio.h>

int main()
{
    int num, swapnum, firstDigit, lastDigit;

    printf("Enter 4 digit number: "); // 1234
    scanf("%4d", &num);

    firstDigit = num / 1000;
    lastDigit = num % 10;

    swapnum = lastDigit * 1000 + (num % 1000 - lastDigit) + firstDigit;

    printf("Number after swapping is=%d", swapnum);

    return 0;
}