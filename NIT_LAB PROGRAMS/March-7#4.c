#include <stdio.h>

int main() 
{
   long income;
   float tax;
   
   printf("Enter your personal annual Income: $");
   scanf("%ld",&income);
   
   if(income<=10000)
   {
       printf("No tax applied.");
   }
   else if(income>10000&&income<=50000)
   {
       tax=(income*10)/100.0;
       printf("Tax amount= %.2f$",tax);
   }
   else if(income>50000&&income<=100000)
   {
       tax=(income*20)/100.0;
       printf("Tax amount=%.2f$",tax);
   }
   else 
   {
       tax=(income*30)/100.0;
      printf("Tax amount=%.2f$",tax); 
   }

    return 0;
}