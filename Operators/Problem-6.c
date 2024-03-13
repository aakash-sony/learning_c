#include <stdio.h>

int operatorProblem1();
int operatorProblem2();
int operatorProblem3();

int main()
{
   operatorProblem1();
   operatorProblem2();
   operatorProblem3();

   return 0;



}
int operatorProblem1()
{
    int a = 2, b;
    b = a++ + a++ + a++;
    printf("a=%d,b=%d\n", a, b); // a=5,b=9
    a = 2;
    b = ++a + ++a + ++a;
    printf("a=%d,b=%d\n", a, b); // a=5,b=13
    return 0;
}

int operatorProblem2()
{
    int a = 20;
    a++ / 2;
    printf("a=%d\n", a);  //21
    ++a / 2;
    printf("a=%d\n", a);  //22

    return 0;
}

int operatorProblem3()
{
    int a=20;

    a=a++/2;
    printf("a=%d\n",a); //11;
    a=++a/2;
    printf("a=%d",a);  //6
    return 0;
}