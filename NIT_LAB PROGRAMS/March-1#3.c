#include <stdio.h>

int main() 
{
  int month_number;
  printf("Enter the month Number: ");
  scanf("%d",&month_number);
  
  if(month_number==2)
  {
      printf("No.of days: 28.");
  }
  else
  {
       if(month_number==4||month_number==6||month_number==9||month_number==11)
       {
         printf("No.of Days: 30.");
       }
     else
       {
       printf("No.of Days: 31");
       }
  }


return 0;
}