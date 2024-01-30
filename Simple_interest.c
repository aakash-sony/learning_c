#include <stdio.h>

int main()
{
    int P, R, T;
    int SI;
    printf("Enter the Principal : ");
    scanf("%d", &P);
    printf("Enter the Rate : ");
    scanf("%d", &R);
    printf("Enter the Time : ");
    scanf("%d", &T);

    SI = P * R * T / 100;
    printf("The Simple interest is %d ", SI);

    return 0;
}