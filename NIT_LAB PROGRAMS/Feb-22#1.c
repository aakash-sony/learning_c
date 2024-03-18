#include<stdio.h>

int main()
{
    int a=32768;
    printf("a=%d\n",a);   

    a=a+3;
    printf("a=%d\n",a);    

    a>=32767&&printf("Hi\n");   
    a<=32767||printf("Bye\n");  

    a=65540;

    printf("a=%d\n",a);      
    a=-32770;
    printf("a=%d",a);      

    return 0;
}