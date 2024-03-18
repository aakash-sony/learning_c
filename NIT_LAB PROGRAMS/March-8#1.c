#include<stdio.h>

int main() 
{
    
  int month_num;
  printf("Enter month number: ");
  scanf("%d",&month_num);
  
  switch(month_num)
  {
      case 2:
            printf("28 Days.");
            break;
      case 4:
             printf("30 Days.");
             break;
      case 6:
            printf("30 Days.");
            break;
      case 9:
            printf("30 Days.");
            break;
      case 11:   
            printf("30 Days.");
            break;
      default:
            printf("31 Days.");
  }
  
    
    return 0;
}