#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[30];
    char c;
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]", s);

    printf("Enter the character which you want to remove: ");
    scanf(" %c", &c);
    for (i = 0; i < strlen(s) - 1; i++)
    {
        if (tolower(s[i]) == c)
        {
            for (j = i; j < strlen(s) - 1; j++)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
            i--;
        }
    }
    printf("Resulting String: %s", s);
    return 0;
}