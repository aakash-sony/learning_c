#include<stdio.h>

int main()
{
  int num,reverse;
  int lastdigit,firstdigit;           //1234
  printf("Enter a 4 digit number: ");
  scanf("%d",&num);

   lastdigit=num%10;
   firstdigit=num/1000;

   reverse=lastdigit*1000+((num/10)%10)*100+((num/100)%10)*10+ firstdigit;

   printf("The reverse num= %d",reverse);

   return 0;
}


