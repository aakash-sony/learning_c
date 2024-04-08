#include <stdio.h>

int main()
{
    int num, firstdigit, lastdigit, reversenum;

    printf("Enter a 5 Digit Number: ");
    scanf("%5d", &num);
    // 12345
    firstdigit = num / 10000;
    lastdigit = num % 10;

    reversenum = lastdigit * 10000 + ((num / 10) % 10) * 1000 + ((num / 100) % 10) * 100 + ((num / 1000) % 10) * 10 + firstdigit;

    printf("The reverse number is= %d", reversenum);

    return 0;
}