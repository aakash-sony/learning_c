#include <stdio.h>
#include <string.h>
int main()
{
    char s[30],temp;
    printf("Enter a String: ");
    gets(s);
    printf("Length=%d", strlen(s));
    printf("\nReverse=%s", strrev(s));
    printf("\nLower Case=%s", strlwr(s));
    printf("\nUpper Case=%s", strupr(s));
    return 0;
}