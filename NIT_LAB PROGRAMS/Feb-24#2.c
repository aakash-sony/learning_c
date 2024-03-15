#include <stdio.h>
#include <conio.h>

int main()
{
    int choose, a, b;
    char ch;
    printf("*********Welcome To the Arithmatic Calculator************\n");
    printf("\n");
start:
    printf("Enter 1 for Addition.\n");
    printf("Enter 2 for Subtraction.\n");
    printf("Enter 3 for Multiplication.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Modulus.\n");
    printf("\n");
    printf("Please choose any option for performing the operation: ");
    scanf("%d", &choose);

    if (choose <= 5 && choose > 0)
    {
        printf("Enter the value of a and b:");
        scanf("%d%d", &a, &b);
    }

    if (choose == 1)
    {
        printf("Addition of %d and %d= %d\n", a, b, a + b);
    }
    else if (choose == 2)
    {
        printf("Subtraction of %d and %d= %d\n", a, b, a - b);
    }
    else if (choose == 3)
    {
        printf("Multiplication of %d and %d= %d\n", a, b, a * b);
    }
    else if (choose == 4)
    {
        printf("Division of %d and %d= %d", a, b, a / b);
    }
    else if (choose == 5)
    {
        printf("Modulus of %d and %d= %d", a, b, a % b);
    }
    else
    {
        printf("Invalid Option\n");
    }

    printf("Do you want to continue(y/n)\n");
    ch = getch();
    if (ch == 'y' || ch =='Y')
    {
        goto start;
    }
    else
    {
        printf("Thank you");
    }
    return 0;
}