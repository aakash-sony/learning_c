#include <stdio.h>
int main()
{

    char num;
    printf("Please enter a character");
    scanf("%c", &num);

    switch (num)
    {
    case 'A' || 'B' || 'C' || 'D':
        printf("Capital letter alphabet.");
        break;
    case 'a' || 'b' || 'c' || 'd':
        printf("Small lletter alphabet.");
        break;
    default:
        printf("Special symbols.");
    }

    return 0;
}