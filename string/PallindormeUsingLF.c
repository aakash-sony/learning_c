#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30], s2[40];

    printf("Enter a string: ");
    scanf("%s", s1);
    strcpy(s2, s1);
    strrev(s2);
    puts((stricmp(s1, s2) == 0) ? "Palindrome" : "Not a Palindrome");

    return 0;
}