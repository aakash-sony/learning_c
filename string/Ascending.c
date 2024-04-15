#include <stdio.h>
int main()
{
    char s[30], temp;
    printf("Enter a string: ");
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = i + 1; s[j] != '\0'; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("After sorting the Array: %s", s);

    return 0;
}