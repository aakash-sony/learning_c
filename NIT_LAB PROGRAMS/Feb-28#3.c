#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);
    
    if(number%5==0&&number%11==0)
    {
        printf("%d is divisible by both %d and %d",number,5,11);
    }
    if(number%5!=0||number%11!=0)
    {
        printf("Number is not divisible by 5 and 11.");
    }

    return 0;
}