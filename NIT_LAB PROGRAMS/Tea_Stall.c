

/*Welcome and Menu:

You enter the tea stall, warmly welcomed by the attendant:

Attendant: "Welcome to our Tea Stall Counter! Our menu:"


Tea --------------------- Rs. 10

Coffee ------------------ Rs. 20

Cold coffee ------------- Rs. 50

Exit

Attendant: "Choose by entering a number (1-4):"

[User enters choice]


Customize Order:

Based on your choice, the attendant guides you:


[If choice is 1:]

Attendant: "How many cups of refreshing tea?"


[If choice is 2:]

Attendant: "How many cups of aromatic coffee?"


[If choice is 3:]

Attendant: "How many cups of chilled cold coffee?"

[User enters quantity]

Total and Payment:

The attendant shares your order total and awaits payment:

Attendant: "Total for [quantity] cup(s): Rs. [total_price]."

Attendant: "Enter your payment amount: Rs."

[User enters amount_paid]


Attendant: "Change: Rs. [change]."

Continuation or Farewell:

Choose to explore more or conclude your visit:

Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"

[User enters order_again]


[If user wants to continue:]

Attendant: "Certainly, let's explore."

[If user doesn't want to continue:]

Attendant: "Thank you for visiting! We look forward to serving you again soon!"*/
#include <stdio.h>

void showMenu();
void chooseOpt(int ch);
void choiceTea(int cup);
void choiceCoffee(int cup);
void choiceColdCoffee(int cup);
int teaPrice(int ttl_p);
void coffeePrice();
void coldCoffeePrice();

int cup,ttl_p;   

int main()
{
    int ch;
   showMenu();
   chooseOpt(ch);

   return 0;
}
void showMenu()
{
    printf("1.Tea----------10\n");
    printf("2.Coffee-----------20\n");
    printf("3.Cold coffee-------50\n");
    printf("4.Exit\n");
}
void chooseOpt(int ch)
{
    int cup;
    printf("Enter your choice: ");
    scanf("%d", &ch);
    if (ch > 0 && ch <= 4)
    {
        switch (ch)
        {
         case 1:
            choiceTea(cup);
            break;
         case 2:
            choiceCoffee(cup);
            break;
         case 3:
            choiceColdCoffee(cup);       
             break;
         default:
            printf("Thank you for visiting.");
            
        }
    }
    else
    {
        printf("Please choose correct.\n");
    }
}
void choiceTea(int cup)
{
    printf("how many cups of refreshing tea?:");
    scanf("%d",&cup);
    if(cup>=0)
    {
       
    }
    else
      printf("wrong selection");
    
}
void choiceCoffee(int cup)
{
    printf("how many cup of aromatic coffee?:");
    scanf("%d",&cup);
    coffeePrice(ttl_p);
    
}
void choiceColdCoffee(int cup)
{
    printf("how many cup of cold coffee?:");
    scanf("%d",&cup);
    coldCoffeePrice(ttl_p);
}
int teaPrice(int ttl_p)
{
    printf("total=%d",cup*10);
    return cup*10;
}
void coffeePrice()
{
    int cup;
    ttl_p=cup*20;
    printf("total for %d cup=Rs.%d",cup,ttl_p);
}
void coldCoffeePrice()
{
    int cup;
    ttl_p=cup*50;
    printf("total for %d cup=Rs.%d",cup,ttl_p);
}