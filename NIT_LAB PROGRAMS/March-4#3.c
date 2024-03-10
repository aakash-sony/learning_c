#include <stdio.h>

int main() 
{
    char citizen,gender;
    int age;
    
    printf("****This is only for Indian citizens****\n");
    printf("Enter the nationality(I or i): ");
    scanf("%c",&citizen);
    
    if(citizen=='I'||citizen=='i')
    {
        printf("Enter your gender(M or F): ");
        scanf(" %c",&gender);
        printf("Enter your age: ");
        scanf("%d",&age);
        
        if(gender=='M'||gender=='m')
        {
            if((age>=21)&&(age<=50))
            {
                printf("Congratulation! You are eligible for marriage.");
            }
            else
            {
                printf("Sorry! you are not eligible for marriage.");
            }
        }
        if(gender=='F'||gender=='f')
        {
            if((age>=18)&&(age<=45))
            {
                printf("Congratulation! you are eligible for marriage.");
            }
            else
            {
                printf("Sorry! you are not eligible for marriage.");
            }
        }
    }
    else
    {
        printf("*****Sorry,This is only for Indian Citizen.*****\n");
    }
  
    return 0;
}