#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please Enter Three Number: ");
    scanf("%d %d %d", &a, &b, &c);

    a >= b &&a >= c &&printf("The Biggest number is=%d", a);
    b >= c &&b >= a &&printf("The Biggest Number is=%d", b);
    c >= b &&c >= a &&printf("The Biggest Number is=%d", c);

    return 0;
}
