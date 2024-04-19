#include <stdio.h>
#include <ctype.h>
int main()
{
    char s[40];
    int index1, index2, i, j;

    printf("Enter a string: ");
    scanf("%[^\n]", s);
    printf("Enter the starting index: ");
    scanf("%d", &index1);
    printf("Enter the ending index: ");
    scanf("%d", &index2);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = index1; j <= index2; j++)
        {
            s[j] = toupper(s[j]);
        }
    }
    printf("\nResulting String: %s", s);
    return 0;
}