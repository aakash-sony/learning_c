#include <stdio.h>

int main() {

    long n;
    int r1,r2;
    printf("Enter a number: ");
    scanf("%ld",&n);    
    while(n>10)
    {                   
         r1=n%10;       
         n=n/10;       
         r2=n%10;       
        if(r1-r2==1||r1-r2==-1)
        {
            continue;
        }
        else
        {
          printf("Not step number.");
           return 0;;
        }
        
    }
        printf("Step number.");
           
    return 0;
}