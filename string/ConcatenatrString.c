#include <stdio.h>
#include <string.h>

void withFun(char str1[], char str2[]);
void withoutFun(char str1[], char str2[]);
int main()
{
    char str1[40], str2[40];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    withFun(str1, str2);
    withoutFun(str1, str2);

    return 0;
}
void withFun(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Final string is: %s ", str1);
}
void withoutFun(char str1[], char str2[])
{
    char str3[40];
    int i, j;
    for (i = 0, j = 0; str1[i] != '\0'; i++, j++)
    {
        str3[j] = str1[i];
    }
    for (i = 0; str2[i] != '\0'; i++)
    {
        str3[j] = str1[i];
    }
    str3[j] = '\0';
    printf("\nFinal string is: %s ", str3);
}
