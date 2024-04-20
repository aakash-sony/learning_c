#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Function to check if a given string is a palindrome
bool isPalindrome(const char str[])
{

    int len = strlen(str) - 1;
    int count = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[len - i]))
        {
            count++;
            return false;
        }
    }
    if (count == 0)
        return true;
}

int main()
{

    char s[40];
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    if (isPalindrome(s))
    {
        printf("String is Palindrome.");
    }
    else
    {
        printf("String is not a Palindrome string.");
    }
    return 0;
}