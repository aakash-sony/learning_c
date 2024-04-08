#include <stdio.h>
#include <math.h>

void printPercentageDivision(float marks);
void diffrenceBetweenIntegers(int a, int b);
void printArmstrongNumber();
int checkIfArmstrong(int num);
int getNumberOfDigit(int num);
int getMultipleOfNumber(int n, int powValue);

int main()
{
    int marks;
    int a, b;
    printPercentageDivision(marks);
    diffrenceBetweenIntegers(a, b);
    printArmstrongNumber();
    return 0;
}

void printPercentageDivision(float marks)
{
    int hindi, science, math, english;
    float percentage;
    printf("Please Enter the marks for checking Percentage: \n");
    printf("Marks of Hindi out of 100: ");
    scanf("%d", &hindi);
    printf("Marks of Science out of 100: ");
    scanf("%d", &science);
    printf("Marks of Math out of 100: ");
    scanf("%d", &math);
    printf("Marks of English out of 100: ");
    scanf("%d", &english);

    percentage = ((hindi + science + math + english) / 4);
    printf("You have found total %.2f percentage\n", percentage);

    if (percentage >= 80)
        printf("First Division\n");
    else
    {
        if (percentage >= 60 && percentage < 80)

            printf("Second Division\n");

        else
        {
            if (percentage >= 33 && percentage < 60)
            {

                printf("Third Division\n");
            }
            else
            {
                printf("Fail\n");
            }
        }
    }
}

void diffrenceBetweenIntegers(int a, int b)
{
    printf("Please Enter the two number for finding diffrence: ");
    scanf("%d %d", &a, &b);
    if (a >= b)
        printf("The diffrence between %d and %d is %d", a, b, a - b);
    else
        printf("The diffrence between %d and %d is %d", a, b, b - a);
}
void printArmstrongNumber()
{
    int initialVal = 0;
    int maxLimit = 10000;
    int count = 0;
    int maxIteration = 20;
    printf("The armstrong number between %d to %d is : \n", initialVal, maxLimit);

    for (int i = initialVal; i < maxLimit; i++)
    {
        if (checkIfArmstrong(i) == 1)
        {
            if (count == maxIteration)
            {
                break;
            }
            else
            {
                count++;
                printf("%d is armstromg number\n", i);
            }
        }
    }
}

int checkIfArmstrong(int num)
{
    // Code to check if num is armstrong if yes then return 1 or 0

    int result = 0;

    for (int i = num; i > 0; i /= 10)
    {
        int rem = i % 10;
        result += getMultipleOfNumber(rem, getNumberOfDigit(num));
    }

    if (result == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int getNumberOfDigit(int num)
{
    int count = 0;
    for (int i = num; i > 0; i /= 10)
    {
        count++;
    }
    return count;
}

int getMultipleOfNumber(int n, int powValue) // 4, 3
{
    int x = 1;
    for (int i = 0; i < powValue; i++)
    {
        x = x * n;
    }
    return x;
}

// 1256 => 125, 6
/*
Armstring Number

123 => cube(1) + cube(2) + cube(3) = 36 //Not Artmstrong
153 => cube(1) + cube(5) + cube(3) = 153 //Armstrong

*/