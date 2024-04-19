#include<stdio.h>

int main()
{
    int a=32768;
    printf("a=%d\n",a);   //a=-32768

    a=a+3;
    printf("a=%d\n",a);    //-32765

    a>=32767&&printf("Hi\n");   //not printed
    a<=32767||printf("Bye\n");  //not printed

    a=65540;

    printf("a=%d\n",a);      //65540-32768==>32772
    a=-32770;
    printf("a=%d",a);      //32770;
    return 0;
}