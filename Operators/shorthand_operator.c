#include<stdio.h>

void program1();
void program2();

int main()
{

    program1();
    program2();

    return 0;

}
void program1()
{
    int a=10,b=20,c=5;
    a+=b*=c/=printf("Indians");     //a=a+b,b=b*c,c=c/printf("indians")
    printf("%d, %d, %d\n",a,b,c);    //Indians,c=5/7==>0
}                                      // b=20*0==>0, a=10.

void program2()
{
    int a=4.5,b=10.22,c=20.2;
    c+=b*=a/=3.3;
    printf("a=%d, b=%d, c=%d\n",a,b,c);    //a=a/3.3,b=b*a,c=c+b
                                            //a=1,b=10,c=30
}



