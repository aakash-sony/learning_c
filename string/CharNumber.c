#include <stdio.h>
int main()
{
    char s[30], temp;
    int count = 0, i, j;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    for (i = 0; s[i] != '\0'; i++)
    {
        temp = s[i];
        if (temp == '*')
            continue;
        for (j = 0; s[j] != '\0'; j++)
        {
            if (temp == s[j])
            {
                count++;
                s[j] = '*';
            }
        }
        printf("%c%d", temp, count);
        count = 0;
    }
    return 0;
}