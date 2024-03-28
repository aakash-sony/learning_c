#include <stdio.h>

int main()
{
    int hour,min;
   printf("Enter Current hour(in 24-hour format): ");
   scanf("%d",&hour);
   
   if(hour>23)
    {
        printf("Inavlid Hours.");
    }
    else
    {
        printf("Enter the minutes(0-60): ");
        scanf("%d",&min);
        
        if(hour>=0&&hour<12&&min<60)
        {
          printf("Good Morning.");
        }
        else if(hour>=12&&hour<=17&&min<60)
        {
            printf("Good Afternoon.");
        }
        else if(hour>17&&hour<=23&&min<60)
        {
            printf("Good Evening.");
        }
        else
        {
            printf("Invalid Minutes.");
        }
    }
    return 0;
}