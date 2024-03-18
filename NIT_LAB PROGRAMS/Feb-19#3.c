#include<stdio.h>
int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    (n%2==0)&&printf("Given number is Even\n");
    (n%2!=0)&&printf("Given number is Odd\n");
     
   return 0;
}