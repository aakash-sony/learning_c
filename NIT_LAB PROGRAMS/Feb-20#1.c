#include<stdio.h>
int main()
{
    int cupOfTea,cupOfCoffee,biscuits;
    int totalBill,a,b,c;
    
    printf("******Welcome to Tasty Treats cafe!******\n5");
    
    printf("How many cups of tea would you like to order: ");
    scanf("%d",&cupOfTea);
    
    printf("How many cups of coffee would you like to order: ");
    scanf("%d",&cupOfCoffee);
    
    printf("How many biscuits would you like to order: ");
    scanf("%d",&biscuits);
    
    a=cupOfTea*15;
    b=cupOfCoffee*25;
    c=biscuits*10;
    totalBill=a+b+c;
    
    printf("%d cup of Tea*15=%d Rs.\n",cupOfTea,a);
    printf("%d cup of Coffee*25=%d Rs.\n",cupOfCoffee,b);
    printf("%d Biscuits*10=%d Rs.\n",biscuits,c);
    printf("Total Bill=%d Rs.",totalBill);
    
  
    
    return 0;
}