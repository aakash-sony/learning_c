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