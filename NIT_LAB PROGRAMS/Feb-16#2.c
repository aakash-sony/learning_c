#include<stdio.h>

int main()
{
    char lowercase,uppercase;
    printf("Please Enter the character in lower case: ");
    scanf("%c",&lowercase);
     
     uppercase=lowercase-32;
     printf("The character in uppercase is= %c",uppercase);
     return 0;
}