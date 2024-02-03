#include <stdio.h>

int main()
{
    unsigned int num;
    int reverseNum = 0;
    printf("Please Enter the Number : ");
    scanf("%d", &num);

  while(num!=0)
    {
        reverseNum = reverseNum*10 + num % 10;
        num = num / 10;
    }
    printf("%d",reverseNum);
}