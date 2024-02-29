#include <stdio.h>

void program1();
void program2();
void program3();

int main()
{
    program1();
    program2();
    program3();

    return 0;
}
                            // a<<5====a*2*2*2*2*2
void program1()
{
    int a = 10;
    a += 2 + 3; // a=a+2+3===>10+5=15;
    a <<= 3;    // 15<<3===>15*2*2*2=120
    printf("%d\n", a);
}

void program2()
{
    int a = 10;
    a << 2;
    printf("%d\n", a); // 10*2*2=40 but not stored in any variable,a=10;
    a >> 1;
    printf("%d\n", a); // 10>>1=10*2 but not stored in any variable,a=10;
    a << 2 + 1 >> 2;
    printf("%d\n", a); // a=10
}

void program3()
{
    int a = 10;
    a = a << 2;
    printf("%d\n", a);   // a=10<<2===>10*2*2==>40.
    a = a >> 1;
    printf("%d\n", a);    //a=40>>1==>40/2===>20.
    a = a << 2 + 1 >> 2;
    printf("%d\n", a);    //a=(20<<3>>2)===>20*2*2*2/4===>40.
}
