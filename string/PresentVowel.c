#include <stdio.h>
int main()
{
    char s[30];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            printf("\nVowel is present.");
            return 0;
        }
    }
    printf("\nVowel is not available.");

    return 0;
}