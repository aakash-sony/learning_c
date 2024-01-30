#include <stdlib.h>
#include<stdio.h>

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
        printf("3. Check if a given number is prime\n");
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

void performArithmeticOperation()
{
    printf("Done\n");
}

void findFactorial()
{
    printf("Done\n");
}

void checkPrime()
{
    printf("Done\n");
}