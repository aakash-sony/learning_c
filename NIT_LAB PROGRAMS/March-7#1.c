#include <stdio.h>

int main() {
    int age;
    float height,base_Price,ttl,ttl_1;
    char vip_pass;
    start:
    printf("Enter your Age: ");
    scanf("%d",&age);
    if(age>0&&age<=3)
    {
        printf("Ticket is Free for you.\n");
    }
    
    else if(age>3&&age<=12)
    {
        base_Price=20;
        printf("Enter your Height(in CM):");
        scanf("%f",&height);       
        if(height>180)
        {
            ttl=50+base_Price;
            printf("The Ticket Price=%.2f",ttl);
            printf("\nYou have VIP Pass or not: ");
            scanf(" %c",&vip_pass);
            if(vip_pass=='y'||vip_pass=='Y')
            {
                ttl_1=ttl-ttl*0.1;
                printf("Total ticket Price=%.2f",ttl_1);
            }
            else
            {
                printf("You have no VIP Pass.");
                printf("\nThe Ticket Price=%.2f",ttl);
                
            }
        }
        else if(height>=120&&height<=180)
        {
            ttl=base_Price;
            printf("Ticket Price=%.2f",ttl);
            printf("\nYou have VIP pass or not: ");
            scanf(" %c",&vip_pass);
            if(vip_pass=='y'||vip_pass=='Y')
            {
                ttl_1=ttl-ttl*0.1;
                printf("Total Ticket Price=%.2f",ttl_1);
            }
            else
            {
                printf("No VIP Pass");
                 printf("\nTicket Price=%.2f",ttl);
            }
        }
        else if(height>0&&height<120)
        {
            ttl=base_Price*0.5;
            printf("You have found 50 Percentage discount\n");
            printf("Ticket Price=%.2f",ttl);
            printf("\nYou have VIP Pass or not.");
            scanf(" %c",&vip_pass);
            if(vip_pass=='y'||vip_pass=='Y')
            {
                ttl_1=ttl-ttl*0.1;
                printf("Total Ticket Price=%.2f",ttl_1);
            }
            else
            {
                printf("No VIP Pass");
                printf("\nTicket Price=%.2f",ttl);
            }
        }
        else
        {
            printf("Height can't be negative or 0.");
            
        }
        
    }
    else if(age>12&&age<=64)
    {
        base_Price=100;
        printf("Enter your Height(in CM):");
        scanf("%f",&height);       
        if(height>180)
        {
            ttl=50+base_Price;
            printf("Ticket Price=%.2f",ttl);
            printf("\nYou have VIP Pass or not: ");
            scanf(" %c",&vip_pass);
            if(vip_pass=='y'||vip_pass=='Y')
            {
                ttl_1=ttl-ttl*0.1;
                printf("Total ticket Price=%.2f",ttl_1);
            }
            else
            {
                printf("You have no VIP Pass.");
                 printf("\nTicket Price=%.2f",ttl);
            }
        }
        else if(height>=120&&height<=180)
        {
            ttl=base_Price;
            printf("Ticket Price=%.2f",ttl);
            printf("\nYou have VIP pass or not: ");
            scanf(" %c",&vip_pass);
            if(vip_pass=='y'||vip_pass=='Y')
            {
                ttl_1=ttl-ttl*0.1;
                printf("Total Ticket Price=%.2f",ttl_1);
            }
            else
            {
                printf("No VIP Pass");
                printf("\nTicket Price=%.2f",ttl);
            }
        }
        else if(height>0&&height<120)
        {
            ttl=base_Price*0.5;
            printf("You have found 50 Percentage discount\n");
            printf("Ticket Price=%f",ttl);
            printf("\nYou have VIP Pass or not.");
            scanf(" %c",&vip_pass);
            if(vip_pass=='y'||vip_pass=='Y')
            {
                ttl_1=ttl-ttl*0.1;
                printf("Total Ticket Price=%.2f",ttl_1);
            }
            else
            {
                printf("No VIP Pass");
                 printf("\nTicket Price=%.2f",ttl);
            }
        }
        else
        {
            printf("Height can't be in negative or 0.");
        }
    }
    else if(age>=65)
         {  
             base_Price=50;
             printf("Enter your Height(in CM):");
              scanf("%f",&height);       
             if(height>180)
            {
              ttl=50+base_Price;
              printf("Ticket Price=%.2f",ttl);
              printf("\nYou have VIP Pass or not: ");
              scanf(" %c",&vip_pass);
               if(vip_pass=='y'||vip_pass=='Y')
               {
                ttl_1=ttl-ttl*0.1;
                printf("Total ticket Price=%.2f",ttl_1);
               }
               else
              {
                printf("You have no VIP Pass.");
                 printf("\nTicket Price=%.2f",ttl);
              }
            }
            else if(height>=120&&height<=180)
           {
            ttl=base_Price;
            printf("Ticket Price=%.2f",ttl);
            printf("\nYou have VIP pass or not: ");
            scanf(" %c",&vip_pass);
               if(vip_pass=='y'||vip_pass=='Y')
              {
                ttl_1=ttl-ttl*0.1;
                printf("Total Ticket Price=%.2f",ttl_1);
              }
              else
              {
                printf("No VIP Pass");
                 printf("\nTicket Price=%.2f",ttl);
              }
            }
            else if(height>0&&height<120)
           {
              ttl=base_Price*0.5;
              printf("You have found 50 Percentage discount\n");
              printf("Ticket Price=%.2f",ttl);
              printf("\nYou have VIP Pass or not.");
              scanf(" %c",&vip_pass);
               if(vip_pass=='y'||vip_pass=='Y')
               {
                ttl_1=ttl-ttl*0.1;
                printf("Total Ticket Price=%.2f",ttl_1);
               }
               else
              {
                printf("No VIP Pass");
                 printf("\nTicket Price=%.2f",ttl);
              }
            }
           else
           {
              printf("Height can't be in negative or 0.");
           }
         }
    else
    {
        printf("Age can't be in negative or 0.\n");
        goto start;
    }
      
    


    return 0;
}