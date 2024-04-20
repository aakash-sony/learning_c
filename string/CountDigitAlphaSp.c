#include <stdio.h>
int main()
{
    char s[30], countVowel = 0, countConsonant = 0, countDigit = 0, countSpecial = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
            {
                countVowel++;
            }
            else if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
            {
                countDigit++;
            }
            else
            {
                countConsonant++;
            }
        }
        else
        {
            countSpecial++;
        }
    }
    printf("Vowel Count is: %d\n", countVowel);
    printf("Consonant count is: %d\n", countConsonant);
    printf("Digit count is: %d\n", countDigit);
    printf("Special Character is: %d", countSpecial);

    return 0;
}