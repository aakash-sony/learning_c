#include <stdio.h>
#include <string.h>

int lengthOfGivenString(char name[]);
void printNoOfVowelsInGivenString(char name[]);

int main()
{
    char name[1];
    printf("Please enter your name : \n");
    gets(name);

    printf("Your entered name is: ");
    puts(name);

    printf("\nThe length of given name is: %d", strlen(name));

    printNoOfVowelsInGivenString(name);
    return 0;
}

int lengthOfGivenString(char name[])
{
    int i, count = 0;
    for (i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void printNoOfVowelsInGivenString(char name[])
{
    int i, count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] == 'A' || name[i] == 'a') || (name[i] == 'E' || name[i] == 'e') || (name[i] == 'I' || name[i] == 'i') || (name[i] == 'O' || name[i] == 'o') || (name[i] == 'U' || name[i] == 'u'))
        {
            count++;
        }
    }
    printf("No. of vowels is %d", count);
}