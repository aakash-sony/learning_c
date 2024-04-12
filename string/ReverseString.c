#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    int length = strlen(s);
    printf("\nThe reverse of string is: ");
    for (int i = length; i >= '\0'; i--)
    {
        printf("%c", s[i]);
    }

    return 0;
}