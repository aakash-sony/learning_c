#include <stdio.h>
int main() {
   
 int num;
 printf("Please enter a number: ");
 scanf("%d",&num);
 
    if(num%2==0)
    {
    printf("Given number is even.");
    }
    if(num%2!=0)
    {
    printf("Given number is odd");
    }
 
   
return 0;
}