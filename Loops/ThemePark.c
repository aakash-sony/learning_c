#include<stdio.h>
/*You are developing a ticket pricing system for a theme park.
 Write a program that takes the following inputs from a customer:



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

If the customer has a VIP pass, they get a 10% discount on the final ticket price.*/

int main()
{
   int age,base_p;
   float height,ticket_p;
   char c;
    a:
   printf("Enter the Age: "); scanf("%d",&age);
   if(age>0)
   {
        if(age<=3)
        {
            printf("Your Ticket is free.");return 0;
        }
        else if(age<=12&&age>3)
        {
            base_p=20;
        }
        else if(age>12&&age<=64)
        {
            base_p=100;
        }
        else
        {
            base_p=50;
        }
   }
   else
   {
      printf("Age can't be negative or 0.\n");goto a;
   }
   if(age>3)
   {
      b:
      printf("Enter height: "); scanf("%f",&height);
      if(height>0)
       {
            if(height>180)
           {
              ticket_p=base_p+50;
           }
           else if(height<180&&height>=120)
           {
                ticket_p=base_p;
           }
           else
           {
               ticket_p=base_p*0.5;
           }
       }
       else
       {
          printf("Height can't be negative or 0.\n");  goto b;
       }
    }
  
      printf("You have VIP PASS or not(y/n)?");   scanf(" %c",&c);
    if(c=='y'||c=='Y')
      {
        ticket_p=ticket_p-ticket_p*0.1;
      }
      else
      {
        printf("No VIP Pass.\n");
      }
     printf("Ticket Price =%.2f",ticket_p);
      return 0;
}