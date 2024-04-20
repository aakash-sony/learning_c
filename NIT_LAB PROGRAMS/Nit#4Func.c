#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a string contains only digits
bool containsOnlyDigits(char str[])
{
    int count;
    int len = strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            count++;
        }
    }
    if (count == len)
        return true;
    else
        return false;
}

int main()
{
    char s[40];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    if (containsOnlyDigits(s))
        printf("The strings contains only digits.");
    else
        printf("The strings contains non-digits character.");
    return 0;
}