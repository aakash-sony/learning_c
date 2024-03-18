#include<stdio.h>


int main() 
{
    int numberOfDays=390,rd;
    int year, month,b,c;
    
     year=numberOfDays/(365);
     printf("%d year\n",year);
     
     rd=numberOfDays-365*year;
     printf("%d month\n",(rd/31));
     
     b=rd%30;
     (b>7)&&printf("%d week\n",b/7);
     
     c=b%7;
     printf("%d days",c);
    
     
    return 0;    
}