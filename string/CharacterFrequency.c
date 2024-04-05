#include <stdio.h>
int main()
{
    char s[100],temp;
    int i, j, count = 0;
    printf("Enter a string: ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        temp = s[i];
        count = 0;
        if (temp == -1)
            continue;
        for (j = 0; s[j] != '\0'; j++)
        {
            if (temp == s[j])
            {
                count++;
                s[j] = -1;
            }
        }
        printf("\n%c occurs %d times", temp, count);
    }
    return 0;
}