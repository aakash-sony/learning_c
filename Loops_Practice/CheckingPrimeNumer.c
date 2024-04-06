#include<stdio.h>

int main()
{
 int i,num;
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
        return 0;
}