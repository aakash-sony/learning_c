#include <stdlib.h>
#include <stdio.h>

void performArithmeticOperation();
void findFactorial();
void checkPrime();

int main()
{

    int choice;
    int ch;

    do
    {

        system("cls");
        printf("********************************************************\n");
        printf("Welcome\n");
        printf("1. Arithmetic Operation\n");
        printf("2. Find factorial of a number\n");
        printf("3. Check if a given number is prime or not\n");
        printf("********************************************************\n");

        printf("Please enter your choice from the menu items\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            performArithmeticOperation();
            break;
        case 2:
            findFactorial();
            break;
        case 3:
            checkPrime();
            break;
        default:
            printf("Oops!, Invalid option selected\n");
        }

        printf("Do you want to perform some other operation? (1/0)\n");
        scanf("%d", &ch);

    } while (ch == 1);

    printf("*********Thanks you***********\n");
}

int addingOperation(int a, int b)
{

    printf("Enter the Two Numbers : ");
    scanf("%d %d", &a, &b);
    printf("The Sum of %d and %d is %d\n", a, b, a + b);
    return 0;
}
int multiplicationOperation(int a, int b)
{

    printf("Enter the Two Numbers : ");
    scanf("%d %d", &a, &b);
    printf("The Multiply of %d and %d is %d\n", a, b, a * b);
    return 0;
}
int subtractionOperation(int a, int b)
{

    printf("Enter the Two Numbers : ");
    scanf("%d%d", &a, &b);
    printf("The Subtraction of %d and %d is %d\n", a, b, a - b);
    return 0;
}
int divisionOperation(float a, float b)
{

    printf("Enter the Two Numbers : ");
    scanf("%f %f", &a, &b);
    printf("The Division of %.2f and %.2f is %.2f\n ", a, b, a / b);
    return 0;
}

void performArithmeticOperation()
{
    int opt;
    int option;
    int a, b;
    do
    {
        system("cls");
        printf("***************Airthmetic*****************\n");
        printf("1. Adding Operation.\n");
        printf("2. Multiplication Operation.\n");
        printf("3. Subtraction Operation\n");
        printf("4. Division Operation\n");
        printf("****************************************\n");

        printf("Please enter your choice from the menu items\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            addingOperation(a, b);
            break;
        case 2:
            multiplicationOperation(a, b);
            break;
        case 3:
            subtractionOperation(a, b);
            break;
        case 4:
            divisionOperation(a, b);
            break;
        default:
            printf("Invalid Option\n");
        }
        printf("Do you want to perform some other operation? (1/0)\n");
        scanf("%d", &opt);
    } while (opt == 1);

    printf("*********Now You are in main menu***********\n");
}

void findFactorial()
{
    int x, multiply = 1;
    printf("Please Enter a no. for finding factorial : ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        multiply = multiply * i;
    }
    printf("%d\n", multiply);
}

void checkPrime()
{
    int i;
    int n;
    printf("Please Enter the Number :");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        printf("Entered number is Prime.\n");
    else
        printf("Entered number is not Prime.\n");
}