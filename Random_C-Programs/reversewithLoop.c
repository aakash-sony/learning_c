#include <stdio.h>

int main()
{
    int num, reverse = 0;
    printf("Please enter the num: ");
    scanf("%d", &num); // 1234

    while(num != 0)
        
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    printf("The reverse num is=%d", reverse);

    return 0;
}