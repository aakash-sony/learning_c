#include <stdio.h>

int main()
{ 
    int n,lastDigit;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    lastDigit=n%10;
    
    if(lastDigit<5)
    {
        printf("Square= %d",n*n);
    }
    else
    {
        printf("%d",n);
    }
  

    return 0;
}