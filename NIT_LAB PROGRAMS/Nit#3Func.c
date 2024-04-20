#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool areAnagrams(char str1[], char str2[])
{
    char temp;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        for (int j = i + 1; str1[j] != '\0'; j++)
        {
            if (str1[i] > str1[j])
            {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        for (int j = i + 1; str2[j] != '\0'; j++)
        {
            if (str2[i] > str2[j])
            {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }
    if (strcmp(str1, str2) == 0)
        return true;
    else
        return false;
}

int main()
{
    char s1[50], s2[50];

    printf("Enter first string: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    if (areAnagrams(s1, s2))
    {
        printf("These strings are anagrams.");
    }
    else
    {
        printf("These strings are not anagrams.");
    }
    return 0;
}