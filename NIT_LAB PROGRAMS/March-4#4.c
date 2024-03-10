#include<stdio.h>
int main()
{
    int pin=1234,count=0;

    abc:
    printf("Enter the pin: ");
    scanf("%4d",&pin);

    if(pin==1234)
    {
        printf("Welcome to ATM.");
    }
    else
    {
       count++;
       if(count==3)
       {
          printf("Your Card is Blocked for 24 hours.");
       }
       
       else
       {
           printf("Invalid Pin.\n");
           goto abc;
       }
    }
    

    return 0;
    
}