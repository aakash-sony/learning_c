#include <stdio.h>

void countingNoOfWordsInString(char name[]);

int main()
{
    char name[30];

    printf("Please enter the name: ");
    gets(name);

    countingNoOfWordsInString(name);

    return 0;
}

void countingNoOfWordsInString(char name[])
{
    int i, count = 0;

    for (i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    printf("The total words=%d", count);
}