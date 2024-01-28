#include <stdio.h>

int convertTempToFrnht(float celcius);
void printTable(int x);
void findFactorial();
int findGradeByMarks();

int main()
{
    float celcius, frnht;
    int x;
    printf("enter the Temp in celcius :");
    scanf("%f", &celcius);
    frnht = convertTempToFrnht(celcius);
    printf("The temp in Fahrenheit is %f\n", frnht);
    printf("Enter the No. for printing the table:");
    scanf("%d", &x);
    printTable(x);
    findFactorial();
    findGradeByMarks();

    return 0;
}

int convertTempToFrnht(float celcius)
{
    return (celcius * 9 / 5 + 32);
}
void printTable(int x)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d= %d\n", x, i, x * i);
    }
}
void findFactorial()
{
    int i, a, multiply = 1;
    printf("Enter the vaule for finding Factorial :");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        multiply = multiply * i;
    }
    printf("The factorial of %d is %d :\n", a, multiply);
}
int findGradeByMarks()
{
    int marks;
    printf("Enter the marks out of 100 : ");
    scanf("%d", &marks);
    if (marks >= 80)
        printf("A Grade Student");
    else
    {
        if (marks >= 60 && marks <= 80)
        {
           printf("B Grade student");
        }
        else
        {
            printf("C Grade student");
        }
    }
}
