#include <stdio.h>

int main()
{
    int a, b, i = 1,gcd;
    printf("Enter a and b values: ");
    scanf("%d%d", &a, &b);

    while (i <= a && i <= b)
    {
        if(a%i==0 && b%i==0)   //6,8
        {
            gcd=i; 
        }
        i++;
    }
    printf("%d",gcd);
    return 0;
}