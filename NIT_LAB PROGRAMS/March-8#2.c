#include<stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    
    if(c>=65&&c<=90)
    {
        c=c+32;
    }
    
    switch(c)
    {
        case 'a':
        printf("Vowel.");
        break;
        case 'e':
        printf("Vowel.");
        break;
        case 'i':
        printf("Vowel.");
        break;
        case 'o':
        printf("Vowel.");
        break;
        case 'u':
        printf("Vowel.");
        break;
        default:
        printf("Consonant.");
        
    }
    
    return 0;
}