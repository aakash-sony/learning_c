#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter value of a,b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        puts("a is greatest.");
    }
    else if (a == b && a == c)
    {
        puts("All are Equal.");
    }
    
    else if (a > b && a == c)
    {
        puts("a and c are equal.");
    }
    else if (b > c && b == a)
    {
        puts("a and b are equal.");
    }
    else if (c > a && c == b)
    {
        puts("c and b are equal.");
    }
    else if (b > c)
    {
        puts("b is greatest.");
    }
    else if (c > b)
    {
        puts("c is greatest.");
    }

    return 0;
}