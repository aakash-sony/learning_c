#include <stdio.h>
int main()
{
    char s[30], count = 0, i;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    for (i = 0; i[s] != '\0'; i++)
    {
        count++;
    }
    printf("The count of Alphabets: %d", count);
    return 0;
}