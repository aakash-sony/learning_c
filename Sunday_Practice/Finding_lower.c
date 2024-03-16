#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a Char: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case.");
    }
    else if (ch >= 'A' && ch<= 'Z')
    {
        printf("Upper Case.");
    }
    else if (ch >= '0' && ch <= '9')
    {
        puts("Digit.");
    }
    else if (ch == ' ')
    {
        puts("space");
    }
    else
    {
        puts("Special Char.");
    }

    return 0;
}