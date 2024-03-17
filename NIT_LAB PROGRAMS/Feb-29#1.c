#include <stdio.h>

int main()
{
    int number;
  printf("Enter the number: ");
  scanf("%d",&number);
  
  if(number>0)
  {
      printf("Number is positive.");
  }
 else if(number<0)
 {
   printf("Number is negative.");
 }
  else
  {
   printf("Number is 0.");
  }

    return 0;
}