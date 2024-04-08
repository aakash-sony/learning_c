#include <stdio.h>

void lastdigitNumber(int num);
void swappingNumber(int a, int b);
void checkingNumberPositiveOrNot(int num);
void checkingNumberOddOrEven(int num);
void greatestAmongThree(int a, int b, int c);
void firstNNaturalNumber(int num);
void reverseNaturalNumber(int num);
void firstNOddNumber(int num);
void firstNEvenNumber(int num);
void lowerCaseAlphabets();
void sumOfNaturalNumber(int num);
void sumOfOddNaturalNumbers(int num);



int main()
{
    int num;
    int a, b, c;
    lastdigitNumber(num);
    swappingNumber(a, b);
    checkingNumberPositiveOrNot(num);
    checkingNumberOddOrEven(num);
    greatestAmongThree(a, b, c);
    firstNNaturalNumber(num);
    reverseNaturalNumber(num);
    firstNOddNumber(num);
    firstNEvenNumber(num);
    lowerCaseAlphabets();
    sumOfNaturalNumber(num);
    sumOfOddNaturalNumbers(num);

    return 0;
}

void lastdigitNumber(int num)
{
    int lastDigit;
    printf("Please Enter the Number for finding last Digit : ");
    scanf("%d", &num);
    lastDigit = num % 10;
    printf("\nThe last digit of given number is : %d\n", lastDigit);
}

void swappingNumber(int a, int b)
{
    printf("Please Enter the number for Swapping: \n");
    printf("Value of a= ");
    scanf("%d", &a);
    printf("value of b= ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The swapping value of a and b is:a=%d b=%d\n", a, b);
}

void checkingNumberPositiveOrNot(int num)
{
    printf("Please Enter the Number for checking Positive or not: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Given number is Positive.\n");
    else
    {
        if (num < 0)
            printf("Given Number is Negative. \n");
        else
            printf("Given Number is 0.\n");
    }
}

void checkingNumberOddOrEven(int num)
{
    printf("Please Enter the number for checking Odd or Even: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Given number is Even\n");
    else
        printf("Given number is Odd\n");
}

void greatestAmongThree(int a, int b, int c)
{
    printf("Please Enter three Number for checking the greatest Number: \n");
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    printf("c= ");
    scanf("%d", &c);
    if (a >= b && a >= c)
        printf("%d is the Greatest Number\n", a);
    else
    {
        if (b >= c)
            printf("%d is the greatest number\n", b);
        else
            printf("%d is the Greatest number\n", c);
    }
}

void firstNNaturalNumber(int num)
{
    printf("Please Enter the Number for printing Natural Number :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
}

void reverseNaturalNumber(int num)
{
    printf("\nPlease Enter the Number for printing Reverse Natural Number: ");
    scanf("%d", &num);

    for (int i = num; i <= num; i--)
    {
        printf("%d ", i);
        if (i == 1)
            break;
    }
}

void firstNOddNumber(int num)
{
    printf("\nPlease Enter the Number for printing First Odd Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 2 * num - 1; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
}

void firstNEvenNumber(int num)
{
    printf("\nPlease Enter the Number for printing First Even Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 2 * num - 1; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}

void lowerCaseAlphabets()
{
    printf("\nThe lower case Alphabets are : \n");
    for(int i='a';i<='z';i++)
    printf("%c ",i);
}

void sumOfNaturalNumber(int num)
{
    int sum = 0;
    printf("\nPlease Enter the Number for finding Sum of the Numbers: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("The Sum of the Numbers is : %d", sum);
}

void sumOfOddNaturalNumbers(int num)
{
    int sum=0;
    printf("\nPlease Enter the Number for finding Sum of the all Odd Numbers: ");
    scanf("%d", &num);
    
    for(int i=1;i<=2*num-1;i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("The Sum of all Odd Numbers is : %d",sum);
}
