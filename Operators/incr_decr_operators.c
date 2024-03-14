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

void program1()
{
    int a, b, c, d;
    a = b = c = 2;
    d = a++ >= b++ || ++b != c++;                  // a=2,b=2,c=2.
    printf("a=%d, b=%d, c=%d,d=%d\n", a, b, c, d); // a=3,b=3,c=2,d=1
}

void program2()
{
    int a, b, c, d;
    a = b = c = 2;
    d = a++ > b++ && ++b != c;                 // a=2,b=2,c=2,d=2.
    printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d); // a=3,b=3,c=2,d=0.
}

void program3()
{
    int a = 0, b = 1, c = 2, d;
    d = a++ || ++b || --c;
    printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d); //d=1,a=1,b=2,c=2
}