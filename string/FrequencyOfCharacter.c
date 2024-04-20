#include <stdio.h>
int main()
{
    char s[30], temp;
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        count = 0;
        temp = s[i];
        if (temp == '*')
            continue;
        for (int j = 0; s[j] != '\0'; j++)
        {
            if (temp == s[j])
            {
                count++;
                s[j] = '*';
            }
        }
        if (count != 0)
        {
            printf("The frequency of %c is %d \n", temp, count);
        }
    }
    return 0;
}