#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool checkPrime(int num)
{
    int j;
    for (j = 2; j <= num; j++)
    {
        if (num % j == 0)
        {
            break;
        }
    }
    if (num == j)
        return true;
    else
        return false;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checkPrime(n))
        printf("Number is Prime.");
    else
        printf("Number is not Prime.");

    return 0;
}