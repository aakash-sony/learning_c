#include <stdio.h>
int main()
{
    char s[30];
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            for (j = i; s[j] != '\0'; j++)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
            i--;
        }
    }
    printf("After removing space: %s", s);

    return 0;
}