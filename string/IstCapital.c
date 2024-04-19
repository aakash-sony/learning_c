#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[30];
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 1; s[i] != '\0'; i++)
    {
        s[0] = toupper(s[0]);
        if (s[i] == ' ')
        {
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    printf("Updated String is: %s", s);
    return 0;
}