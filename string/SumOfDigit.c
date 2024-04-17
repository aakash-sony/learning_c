#include <stdio.h>
int main()
{
    char s[30];
    int count = 0, sum = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            sum += s[i] - 48;
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nNo Digits is available.");
    }
    else
    {
        printf("Sum=%d", sum);
    }

    return 0;
}