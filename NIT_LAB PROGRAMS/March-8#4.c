#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter a num: ");
    scanf("%d",&num);
    
         
    switch(num%2)
    {
        case 0:
          printf("Even.");
          break;
        default:
           printf("Odd");
    } 
    
  
    return 0;
}