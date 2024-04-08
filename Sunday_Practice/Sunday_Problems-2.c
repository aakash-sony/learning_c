#include <stdio.h>

void reverseOrdenNumber(int num);
void printFibonacciNumber(int num);
void printPrimeNumber(int num);
void simpleInterest(float si);
void votingEligibility();

int main()
{
    int num, age;
    float si;

    reverseOrdenNumber(num);
    printFibonacciNumber(num);
    printPrimeNumber(num);
    simpleInterest(si);
    votingEligibility(age);

    return 0;
}

void reverseOrdenNumber(int num)
{
    int reverseNum = 0;
    printf("Please Enter the number for printing in reverse Order: ");
    scanf("%d", &num);

    while (num != 0)
    {
        reverseNum = reverseNum * 10 + num % 10;
        num = num / 10;
    }
    printf("\nThe number in reverse Order is: %d", reverseNum);
}

void printFibonacciNumber(int num)
{
    int a = 0;
    int b = 1;
    int c;
    printf("\nPlease Enter the number for printing Fibonacci series: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void printPrimeNumber(int num)
{
    int i, j;
    printf("Prime No.series from 1 to 100 are:  ");

    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }

        if (j == i)
            printf("%d ", i);
    }
}

void simpleInterest(float si)
{
    int p, r, t;

    printf("\nPlease Enter the Principal for calculating simple interest: ");
    scanf("%d", &p);
    printf("Please Enter the rate: ");
    scanf("%d", &r);
    printf("Please Enter the time: ");
    scanf("%d", &t);
    si = (float)(p * r * t / 100);
    printf("\nThe Simple Interest is %f", si);
}

void votingEligibility(int age)
{
    printf("\nPlease Enter the age for checking Voting Eligibility: ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You are Eligible for Voting.");
    else
    {
        if (age > 0 && age < 18)
            printf("You are not Eligible for Voting");
        else
            printf("It's Invalid");
    }
}