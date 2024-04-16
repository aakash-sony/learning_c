#include <stdio.h>
int main()
{
    char s[40];
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            c1++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            c2++;
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            c3++;
        }
        else
        {
            c4++;
        }
    }
    if (c1 != 0 && c2 != 0 && c3 != 0 && c4 != 0)
    {
        printf("The given string is matching to our cases.");
    }
    else
    {
        printf("The given string is not match to our cases.");
    }
return 0;
}