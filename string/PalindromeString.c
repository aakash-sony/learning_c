#include <stdio.h>
#include<ctype.h>
 
 void caseSensitiveLogic(char str[120]);
 int main()
{

    char str[120];
    printf("Enter a string: ");
    scanf("%s",str);
    caseSensitiveLogic(str);
 
    return 0;
}
void caseSensitiveLogic(char str[120])
{
    int len;
    for(len=0;str[len]!='\0';len++);
    {
        for(int i=0;i<len/2;i++)
        {
            if(tolower(str[i])!=tolower(str[len-i-1]))
            {
                printf("Not a Palindrome string.");
                return;
            }
        }
    }
        printf("palindrome string.");
}
