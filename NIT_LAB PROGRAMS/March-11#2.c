/*You are developing a ticket pricing system for a theme park. Write a program that takes the following inputs from a customer:



Age (integer)

Height in centimeters (float)

Whether the customer has a VIP pass (y or n)

The program should calculate the ticket price based on the following rules:



Children under 3 years old (inclusive) get in for free.

Children aged 4 to 12 (inclusive) pay Rs.20.

Adults aged 13 to 64 (inclusive) pay Rs.100.

Seniors aged 65 and above pay Rs.50.

However, there are some additional considerations based on height:



If the customer is above 180 cm in height, they pay an extra 50.

If the customer is between 120 cm (inclusive) and 180 cm (inclusive), no additional charge applies.

If the customer is below 120 cm, they receive a 50% discount on the base ticket price.

If the customer has a VIP pass, they get a 10% discount on the final ticket price.

Write a program that implements these pricing rules and provides the following output:


The customer's age, height, and VIP pass status.

The calculated base ticket price before any discounts or additional charges.

Any discounts or additional charges applied based on height.

The final ticket price after applying all discounts and charges.

Additionally, if the customer's age is below 0 or height is negative, the program should provide an error message.*/
#include<stdio.h>
 
void ageInput(int age);
void heightInput(float h);
void checkVIPpass(char c);

int base_p;
char c;
float final_p;
int main()
{
    int age;
    printf("****Welcome to Theme Park****\n");
    ageInput(age);

    return 0;
}
void ageInput(int age)
{
    float h;
    again:
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>0)
    {
        if(age<=3)
        {
            printf("Your Ticket is Free.\n");
        }
        else if(age>3&&age<=12)
        {
            base_p=20;
            printf("Ticket Price=%d\n",base_p);
            heightInput(h);
            checkVIPpass(c);
        }
        else if(age>12&&age<=64)
        {
             base_p=100;
             printf("Ticket Price=%d\n",base_p);
             heightInput(h);
            checkVIPpass(c);
        }
        else
        {
             base_p=50;
             printf("Ticket Price=%d\n",base_p);
             heightInput(h);
             checkVIPpass(c);
        }
    }
    else
    {
        printf("Invalid age.\n");
        goto again;
    }
}
void heightInput(float h)
{
    int discount;
    start:
    printf("Enter your height: ");
    scanf("%f",&h);
    if(h>0)
    {
      if(h>180)
      {
        int extra=50;
        printf("Extra pay=%d\n",extra);
        final_p=base_p+extra;
       
      }
      else if(h<=180&&h>=120)
      {
         printf("No Extra charges Apply.\n");
         final_p=base_p;
      }
      else
      {
        discount=base_p*50/100;
        printf("Discount=%d\n",discount);
        final_p=base_p-discount;
      }
    }
    else
    {
        printf("Invalid height\n");
        goto start;
    }

}
void checkVIPpass(char c)
{
    printf("You have VIP Pass or not(y/n): ");
    scanf(" %c",&c);
    if(c=='y'||c=='Y')
    {
        final_p=final_p-final_p*0.1;
        printf("Final Price=%.2f\n",final_p);
    }
    else
    {
        printf("NO VIP Pass.\n");
        printf("Final Price=%.2f\n",final_p);
    }
}