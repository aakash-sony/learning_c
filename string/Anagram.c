#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30], s2[30], temp1, temp2;
    printf("Enter Ist string: ");
    scanf("%[^\n]", s1);
    printf("Enter 2nd string: ");
    scanf(" %[^\n]", s2);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = i + 1; s1[j] != '\0'; j++)
        {
            if (s1[i] > s1[j])
            {
                temp1 = s1[i];
                s1[i] = s1[j];
                s1[j] = temp1;
            }
        }
    }

    for (int i = 0; s2[i] != '\0'; i++)
    {
        for (int j = i + 1; s2[j] != '\0'; j++)
        {
            if (s2[i] > s2[j])
            {
                temp2 = s2[i];
                s2[i] = s2[j];
                s2[j] = temp2;
            }
        }
    }

    if (strcmp(s1, s2) == 0)
    {
        printf("\nThese are anargram string.");
    }
    else
    {
        printf("\nThese are not anargram string.");
    }

    return 0;
}