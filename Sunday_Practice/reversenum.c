#include <stdio.h>

int main()
{
    int num,n1,reverse = 0;
    printf("Please enter the number for reverse number: ");
    scanf("%d", &num);

    while(num!=0)
    {
        n1=num%10;
        reverse = reverse*10 + n1;
        num=num/10;
    }
    printf("Reverse Number=%d",reverse);
}