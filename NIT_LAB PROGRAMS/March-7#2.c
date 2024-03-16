#include <stdio.h>

int main() 
{
   float weight,height,bmi;
   start:
   printf("Enter the weight(in Kg): ");
   scanf("%f",&weight);
   if(weight>0)
   {
       again:
        printf("Enter the height in meter: ");
        scanf("%f",&height);
        if(height>0)
        {
            bmi=weight/(height*height);
            printf("BMI=%.2f\n",bmi);
              
           if(bmi>0&&bmi<18.5)
           {
              printf("Underweight.");
           }
           else if(bmi>=18.5&&bmi<25)
           {
             printf("Normal weight.");
           }
           else if(bmi>=25&&bmi<30)
           {
             printf("Over weight.");
           }
           else
           {
             printf("Obese");
           }
        }
        else
        {
            printf("Height should not be in negative or 0.\n");
            goto again;
        }
        
   }
   else
   {
       printf("Weight should not be in negative or 0.\n");
       goto start;
   }
   
 

    return 0;
}