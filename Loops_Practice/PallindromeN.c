#include <stdio.h>

void checkingPalindrome(int n);
int reverseNum(int n);
void _1toNPalindrome(int n1, int n2);

int main()
{
    int n, n1, n2;
    printf("Enter a number to checking Palindrome number or not: ");
    scanf("%d", &n);
    checkingPalindrome(n);

    printf("Enter the starting number for printing Palindrome: ");
    scanf("%d", &n1);
    printf("Enter the ending number: ");
    scanf("%d", &n2);
    _1toNPalindrome(n1, n2);

    return 0;
}
int reverseNum(int n)
{
    int rev = 0, r;

    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return rev;
}
void checkingPalindrome(int n)
{
    if (reverseNum(n) == n)
    {
        printf("Given Number is Palindrome.\n");
    }
    else
    {
        printf("Not a Palindrome Number.\n");
    }
}
void _1toNPalindrome(int n1, int n2)
{
    int i, count = 0;
    for (i = n1; i <= n2; i++)
    {
        if (i == reverseNum(i))
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\nTotal %d Number.", count);
}