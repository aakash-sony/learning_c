#include <stdio.h>

void checkingPrimeNumber(int num);
void findFactorialNumber(int num);
void checkingpalindromeNumber(int num);

int main()
{
    int num;

    checkingPrimeNumber(num);
    findFactorialNumber(num);
    checkingpalindromeNumber(num);
    return 0;
}
void checkingPrimeNumber(int num)
{
    int i;
    printf("Please enter the number for checking Number is Prime Or not: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
            break;
    }
    if (num == i)
        printf("Given Number is Prime.\n");
    else
        printf("Given Number is not Prime.\n");
}

void findFactorialNumber(int num)
{
    int multiply = 1;
    printf("Please enter the Number for finding  Factorial: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        multiply = multiply * i;
    }
    printf("The Factorial of Given Number is %d\n", multiply);
}

void checkingpalindromeNumber(int num)
{
    int reversenum = 0, remainder, temp;
    printf("Please Enter the Number for checking number is Palindrome Or Not: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversenum = reversenum * 10 + remainder;
        num = num / 10;
    }
    if (reversenum == temp)
        printf("Given Number %d is Palindrome\n", temp);
    else
    {
        ("Given Number %d is not Palindrome\n", temp);
    }
}