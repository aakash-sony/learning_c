#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30], *s2, *s3;
    puts("Enter a string: ");
    gets(s1);
    strcpy(s2, s1);
    strncpy(s3, s1, 3);
    puts(s1);
    printf("\n%s", s2);
    printf("\n%s", s3);

    return 0;
}