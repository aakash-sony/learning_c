#include <stdio.h>
//add first and last digit.
int main()
{
    int a = 345;
    int a1, a2;
    a1 = a % 10;
    a2 = a / 100;
    printf("%d", a1 + a2);
    return 0;
}
