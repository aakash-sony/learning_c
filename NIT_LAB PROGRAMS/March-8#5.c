#include<stdio.h>
#include<math.h>
int main()
{
   char c;
   float a,b;
   
   printf("Enter the value of a and b: ");
   scanf("%f%f",&a,&b);
   
   printf("Enter operation(*,+,-,/,%):");
   scanf(" %c",&c);
   
   switch(c)
   {
       case '*':printf("Multiplication is:%f", a*b);break;
       case '+':printf("Sum is:%f", a+b);break;
       case '-':printf("Subtraction is:%f", a-b);break;
       case '/':printf("Division is:%f", a/b);break;
       case '%':printf("Modulus is:%f", fmod(a,b));break;
       default: printf("Invalid Input.");
       
    }
   
    
    return 0;
    
}