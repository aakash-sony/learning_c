#include <stdio.h>
int main()
{
    int i;
    char s[30];
    printf("Enter a string: ");
    gets(s);
    if (s[0] != ' ')
    {
        printf("%c.", s[0]);
    }
    for (i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            printf("%c.", s[i + 1]);
        }
    }
    printf("\b ");
    return 0;
}
