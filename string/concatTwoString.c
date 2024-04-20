#include <stdio.h>
int main()
{
    char s1[30], s2[30], s3[30];
    printf("Enter first String: ");
    scanf("%[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    int i = 0, j = 0;
    while (s1[i] != '\0')
    {
        s3[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
    printf("\nResulting String: %s", s3);

    return 0;
}